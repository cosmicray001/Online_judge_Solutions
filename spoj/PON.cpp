#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll bigm(ll a, ll b, ll m){
  if(b == 0) return a % m;
  else if(b % 2 == 0){
    ll re = bigm(a, b / 2, m);
    return ((re % m) * (re % m)) % m;
  }
  else return ((a % m) * (bigm(a, b - 1, m) % m)) % m;
}
bool com(ll n, ll a, ll d, int s){
  ll t = bigm(a, d, n);
  if(t == 1 || t == n - 1) return false;
  for(int i = 1; i < s; i++){
    t = ((t % n) * (t % n)) % n;
    if(t == n - 1) return false;
  }
  return true;
}
bool fnc(ll n){
  if(n == 2) return true;
  int r = 0;
  ll d = n - 1;
  while(d % 2 == 0){
    r++;
    d /= 2;
  }
  for(int i = 0; i < )
  return true;
}
int main(){
  int t;
  ll a;
  for(scanf("%d", &t); t--; ){
    scanf("%lld", &a);
    printf("%s\n", fnc(a) ? "YES" : "NO");
  }
  return 0;
}
