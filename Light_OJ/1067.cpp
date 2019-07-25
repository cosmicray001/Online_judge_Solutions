#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll fnc(ll a, ll b){
  if(b == 0) return 1;
  if(a == b) return 1;
  if(b == 1) return a;
  return fnc(a - 1, b) + fnc(a - 1, b - 1);
}
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int t, co = 0;
  ll a, b;
  for(scanf("%d", &t); t--; ){
    scanf("%lld %lld", &a, &b);
    printf("Case %d: %lld\n", ++co, fnc(a, b));
  }
  return 0;
}
