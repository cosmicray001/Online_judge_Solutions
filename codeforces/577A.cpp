#include <bits/stdc++.h>
#define ll long long int
#define le 100005
using namespace std;
map<ll, int> mp;
ll n[le];
int main(){
  ll a, x, sum = 0;
  scanf("%lld %lld", &a, &x);
  for(ll i = 1; i < a + 1 && i <= x; i++) if(x % i == 0 && (x / i) <= a) sum++;
  cout << sum << endl;
  return 0;
}
