#include <bits/stdc++.h>
#define le 10004
using namespace std;
int n[le];
int fnc(int a, int len){
  int lo = 0, hi = len - 1, mid, ans;
  while(lo <= hi){
    mid = lo + (hi - lo) / 2;
    if(a == n[mid]){
      ans = mid;
      hi = mid - 1;
    }
    else if(a < n[mid]) hi = mid - 1;
    else lo = mid + 1;
  }
  return lo;
}
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int len, q, a, co = 0, ans;
  while(scanf("%d %d", &len, &q) != EOF && len && q){
    for(int i = 0; i < len; scanf("%d", &n[i]), i++);
    sort(n, n + len);
    printf("CASE# %d:\n", ++co);
    while(q--){
      scanf("%d", &a);
      ans = fnc(a, len);
      if(n[ans] != a) printf("%d not found\n", a);
      else printf("%d found at %d\n", a, ans + 1);
    }
  }
  return 0;
}
