#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  ll n, k, x, y;
  scanf("%lld %lld %lld %lld", &n, &k, &x, &y);
  if(k > n) k = n;
  ll sum = (k * x) + ((n - k) * y);
  printf("%lld\n", sum);
  return 0;
}
