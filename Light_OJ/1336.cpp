#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0;
  ll n, ans;
  for(scanf("%d", &t); t--; ){
    scanf("%lld", &n);
    ans = n - (int)sqrt(n) - (int)sqrt(n / 2);
    printf("Case %d: %lld\n", ++co, ans);
  }
  return 0;
}
