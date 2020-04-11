#include <bits/stdc++.h>
#define le 150005
using namespace std;
int n[le];
int main(){
  //freopen("input.txt", "r", stdin);
  int t, len;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &len);
    for(int i = 0; i < len; i++) scanf("%d", &n[i]);
    int mn = n[len - 1], ans = 0;
    for(int i = len - 2; i >= 0; i--){
      if(mn < n[i]) ans++;
      mn = min(mn, n[i]);
    }
    printf("%d\n", ans);
  }
  return 0;
}
