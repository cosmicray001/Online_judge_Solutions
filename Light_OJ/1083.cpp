#include <bits/stdc++.h>
#define li 30004
#define le 120004
using namespace std;
int arr[le], n[li];
int query(int nd, int b, int e, int i, int j){
  if(b > j || e < i) return INT_MAX;
  if(b >= i && e <= j) return arr[nd];
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  int v1 = query(l, b, m, i, j);
  int v2 = query(r, m + 1, e, i, j);
  return min(v1, v2);
}
void init(int nd, int b, int e){
  if(b == e){
    arr[nd] = n[b];
    return;
  }
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  init(l, b, m);
  init(r, m + 1, e);
  arr[nd] = min(arr[l], arr[r]);
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, len;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &len);
    for(int i = 0; i < len; scanf("%d", &n[i]), i++);
    init(1, 0, len - 1);
    long long int ans = 0, m = 0;
    for(int i = 0; i < len; i++){
      ans = 0;
      for(int j = 0; j < i; j++){
        if(query(1, 0, len - 1, j, i - 1) >= n[i]){
          ans = i - j;
          break;
        }
      }
      for(int j = len - 1; j > i; j--){
        if(query(1, 0, len - 1, i + 1, j) >= n[i]){
          ans += j - i;
          break;
        }
      }
      ans++;
      m = max(m, ans * n[i]);
    }
    printf("Case %d: %lld\n", ++co, m);
  }
  return 0;
}
