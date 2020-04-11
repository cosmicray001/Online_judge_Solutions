#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll m = 1000000007;
int main(){
  int t;
  ll n, a;
  for(scanf("%d", &t); t--; ){
    scanf("%lld", &n);
    if(n == 1) printf("1\n");
    else{
      a = n / 2;
      n = n - a;
      printf("%lld\n", ((n % m) * (a % m)) % m);
    }
  }
  return 0;
}
