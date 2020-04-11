#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  ll a, b, c, d;
  scanf("%ld %lld %lld %lld", &a, &b, &c, &d);
  printf("%lld\n", max(a * b, c * d));
  return 0;
}
