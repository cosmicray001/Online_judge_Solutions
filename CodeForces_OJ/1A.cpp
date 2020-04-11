#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  ll n, m, a;
  cin >> n >> m >> a;
  printf("%lld\n", ((n + a - 1) / a) * ((m + a - 1) / a));
  return 0;
}
