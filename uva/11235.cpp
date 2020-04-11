#include <bits/stdc++.h>
#define le 400005
#define li 100005
using namespace std;
int arr[le], n[li];
void init(int nd, int b, int e){
  if(b == e){
    arr[nd] = n[b];
    return;
  }
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  init(l, b, m);
  init(r, m + 1, e);
  arr[nd] = max(arr[l], arr[r]);
}
int query(int nd, int b, int e, int i, int j){
  if(b > j || e < i) return 0;
  if(b >= i && e <= j) return arr[nd];
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  int v1 = query(l, b, m, i, j);
  int v2 = query(r, m + 1, e, i, j);
  return max(v1, v2);
}
int main(){
  freopen("input.txt", "r", stdin);
  int len, q, a, b;
  map<int, int> mp;
  while(scanf("%d", &len) != EOF && len){
    scanf("%d", &q);
    for(int i = 1; i < len + 1; scanf("%d", &a), n[i] = a, mp[a]++, i++);
    for(int i = 1; i < len + 1; n[i] = mp[n[i]], i++);
    init(1, 1, len);
    while(q--){
      scanf("%d %d", &a, &b);
      printf("%d\n", query(1, 1, len, a, b));
    }
    mp.clear();
  }
  return 0;
}
