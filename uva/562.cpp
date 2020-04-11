#include <bits/stdc++.h>
#define le 102
#define ll long long int
using namespace std;
int len;
ll n[le];
int main(){
  //freopen("input.txt", "r", stdin);
  int t;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &len);
    ll sum = 0, mn = LONG_MAX, ans = 0;
    for(int i = 0; i < len; scanf("%lld", &n[i]), sum += n[i], i++);
    int ct = pow(2, len);
    for(int i = 0; i < ct - 1; i++){
      for(int j = 0; j < len; j++){
        if((i & (1 << j)) > 0) ans += n[j];
      }
      mn = min(abs(abs(ans - sum) - ans), mn);
      ans = 0;
    }
    printf("%lld\n", mn);
  }
  return 0;
}
