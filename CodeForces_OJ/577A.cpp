#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  ll n, co = 0, n1, x, n2;
  scanf("%lld %lld", &n, &x);
  n1 = n2 = n;
  if(co >= n) co++;
  for(int i = 1; i < n2; i++){
    n += n1;
    if(co >= n) co++;
  }
  printf("%lld\n", co);
  return 0;
}
