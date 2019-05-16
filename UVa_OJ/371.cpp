#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll fnc(ll a){
  if(a == 1) return 3;
  ll co = 0;
  while(a != 1){
    if(a % 2 == 0) a /= 2;
    else a = (a * 3) + 1;
    co++;
  }
  return co;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll a, b;
  while(scanf("%lld %lld", &a, &b) != EOF && (a || b)){
    if(a > b) swap(a, b);
    ll y = 0, x;
    for(ll i = a; i < b + 1; i++){
      ll ve = fnc(i);
      if(y < ve){
        y = ve;
        x = i;
      }
    }
    printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", a, b, x, y);
  }
  return 0;
}
