#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n, m;
  while(scanf("%lld %lld", &n, &m) != EOF){
    ll ans = 1;
    for(int i = 0; i < m; i++){
      ans = ans * (n - i);
      while(ans % 10 == 0) ans /= 10;
      ans = ans % 1000000000;
    }
    printf("%d\n", ans % 10);
  }
  return 0;
}
