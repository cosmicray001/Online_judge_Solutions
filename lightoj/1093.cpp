#include <bits/stdc++.h>
#define le 100005
using namespace std;
int n[le];
pair<int, int> arr[4 * le];
pair<int, int> com(pair<int, int> a, pair<int, int> b){
  int x = max(a.first, b.first);
  int y = min(a.second, b.second);
  return make_pair(x, y);
}
void init(int nd, int b, int e){
  if(b == e){
    arr[nd] = make_pair(n[b], n[b]);
    return;
  }
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  init(l, b, m);
  init(r, m + 1, e);
  arr[nd] = com(arr[l], arr[r]);
}
pair<int, int> query(int nd, int b, int e, int i, int j){
  if(b > j || e < i) return make_pair(-1, INT_MAX);
  if(b >= i && e <= j) return arr[nd];
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  pair<int, int> p = query(l, b, m, i, j);
  pair<int, int> q = query(r, m + 1, e, i, j);
  return com(p, q);
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, len, d;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &len, &d);
    for(int i = 0; i < len; scanf("%d", &n[i]), i++);
    init(1, 0, len - 1);
    int dif = 0;
    for(int _ = 0; _ < len; _++){
      for(int i = _; i < len; i += d){
        int j = i + d - 1;
        if(j >=  len) j = len - 1;
        pair<int, int> p = query(1, 0, len - 1, i, j);
        dif = max(dif, abs(p.first - p.second));
      }
    }
    printf("Case %d: %d\n", ++co, dif);
  }
  return 0;
}
