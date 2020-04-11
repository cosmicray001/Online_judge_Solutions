#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, len, b;
  for(scanf("%d", &t); t--; ){
    ll ans = 0, n, x, y;
    scanf("%lld %d", &n, &b);
    while(b--){
      scanf("%d %lld", &len, &x);
      for(int i = 0; i < len - 1; i++){
        scanf("%lld", &y);
        x = ((x % n) * (y % n)) % n;
      }
      ans = ((ans % n) + (x % n)) % n;
    }
    printf("%lld\n", ans);
  }
  return 0;
}
