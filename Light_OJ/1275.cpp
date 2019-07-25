#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll fnc(ll t, ll n, ll c){
  return t * (c - (n * t));
}
int main(){
  //freopen("input.txt", "r", stdin);
  int t, co = 0;
  ll t1, t2, n, c, ans;
  for(scanf("%d", &t); t--; ){
    scanf("%lld %lld", &n, &c);
    if(n == 0) ans = 0;
    else{
      t1 = (c / (n * 2));
      t2 = (c / (n * 2)) + 1;
      int t11 = fnc(t1, n, c);
      int t22 = fnc(t2, n, c);
      if(t11 >= t22) ans = t1;
      else ans = t2;
    }
    printf("Case %d: %lld\n", ++co, ans);
  }
  return 0;
}
