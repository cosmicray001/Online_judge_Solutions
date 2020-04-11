#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t;
  for(scanf("%d", &t); t--; ){
    ll a, n;
    scanf("%lld", &a);
    a = a * 2;
    n = (ll)sqrt(a);
    printf("%lld\n", (n * (n + 1) <= a) ? n : n - 1);
  }
  return 0;
}
