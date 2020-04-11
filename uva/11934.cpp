#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll a, b, c, d, l;
  while(scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &l) != EOF && (a || b || c || d || l)){
    int ans = 0;
    for(ll i = 0; i < l + 1; i++){
      ll xx = (i * i);
      xx = (a * xx) + (b * i) + c;
      if(xx % d == 0) ans++;
    }
    printf("%d\n", ans);
  }
  return 0;
}
