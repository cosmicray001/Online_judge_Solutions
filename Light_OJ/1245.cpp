#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0;
  ll n;
  for(scanf("%d", &t); t--; ){
    scanf("%lld", &n);
    ll ans = 0, len = sqrt(n);
    for(ll i = 1; i <= len; i++) ans += n / i + (n / i - n / (i + 1)) * i;
    if(n / len == len) ans -= n / len;
    printf("Case %d: %lld\n", ++co, ans);
  }
  return 0;
}
