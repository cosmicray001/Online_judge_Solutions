#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll fnc(ll n, ll m, ll k){
  if(k > n || k > m) return 0;
  else if(k == 0) return 1;
  else if(m == 1) return n;
  return n * fnc(n - 1, m - 1, k - 1) + fnc(n, m - 1, k);
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0;
  ll n, k;
  for(scanf("%d", &t); t--; ){
    scanf("%lld %lld", &n, &k);
    printf("Case %d: %lld\n", ++co, fnc(n, n, k));
  }
  return 0;
}
