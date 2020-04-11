#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  long long int a, b;
  int t, co = 0;
  for(scanf("%d", &t); t--; ){
    scanf("%lld %lld", &a, &b);
    printf("Case %d: %lld\n", ++co, (a + b) / __gcd(a, b));
  }
  return 0;
}
