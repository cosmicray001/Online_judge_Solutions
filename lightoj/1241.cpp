#include <bits/stdc++.h>
#define le 12
using namespace std;
int n[le];
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, dif, ans, len;
  n[0] = 2;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &len);
    ans = 0;
    for(int i = 1; i < len + 1; scanf("%d", &n[i]), i++);
    for(int i = 0; i < len; i++){
      if(n[i + 1] > n[i]){
        ans += ceil((double)(n[i + 1] - n[i]) / 5.0);
      }
    }
    printf("Case %d: %d\n", ++co, ans);
  }
  return 0;
}
