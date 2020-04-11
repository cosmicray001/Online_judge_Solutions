#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll m = 1000;
ll fnc(ll n, ll p){
  if(!p) return 1;
  if(p % 2 == 0){
    ll x = fnc(n, p / 2);
    return ((x % m) * (x % m)) % m;
  }
  else return ((n % m) * (fnc(n, p - 1) % m)) % m;
}
int ck(ll a){
  int co = 0;
  for(; a > 0; a /= 10) co++;
  return co;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t;
  ll n, p;
  for(scanf("%d", &t); t--; ){
    scanf("%lld %lld", &n, &p);
    ll ans2 = fnc(n, p);
    double temp = p * log10(n);
    temp = pow(10.0, temp - (ll)temp);
    ll ans1 = (ll)(temp * 100);
    printf("%lld...", ans1);
    int a = 3 - ck(ans2);
    if(ans2 == 0) printf("00");
    else while(a--) printf("0");
    printf("%lld\n", ans2);
  }
  return 0;
}
