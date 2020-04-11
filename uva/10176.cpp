#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll m = 131071;
ll fnc(ll n, ll p){
  if(p == 0) return 1;
  if(p % 2 == 0){
    ll x = fnc(n, p / 2);
    return ((x % m) * (x % m)) % m;
  }
  else return ((n % m) * (fnc(n, p - 1) % m)) % m;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  string s, a = "";
  ll n, p;
  while(getline(cin, s)){
    if(s[s.size() - 1] == '#'){
      a += s;
      int co = 0;
      ll sum = 0;
      for(int i = a.size() - 2; i >= 0; i--){
        if(a[i] != '0') sum += fnc(2, co);
        co++;
      }
      sum = sum % m;
      printf("%s\n", (sum == 0) ? "YES" : "NO");
      a = "";
    }
    else a += s;
  }
  return 0;
}
