#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll egcd(ll a, ll b, ll &x, ll &y){
  if(b == 0){
    x = 1;
    y = 0;
    return a;
  }
  ll x1, y1;
  ll g = egcd(b, a % b, x1, y1);
  x = y1;
  y = x1 - (a  / b) * y1;
  return g;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll a, b, g, x, y;
  while(scanf("%lld %lld", &a, &b) != EOF){
    g = egcd(a, b, x, y);
    //if(x > y) swap(x, y);
    printf("%lld %lld %lld\n", x, y, g);
  }
  return 0;
}
