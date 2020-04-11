#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0;
  ll a, b, x, y;
  for(scanf("%d", &t); t--; ){
    scanf("%lld %lld %lld %lld", &a, &b, &x, &y);
    ll ans = __gcd(abs(a - x), abs(b - y));
    printf("Case %d: %lld\n", ++co, ans + 1);
  }
  return 0;
}
