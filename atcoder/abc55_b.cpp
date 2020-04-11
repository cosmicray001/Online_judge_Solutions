#include <bits/stdc++.h>
#define m 1000000007
#define ll long long int
using namespace std;
int main(){
  ll a, sum = 1;
  cin >> a;
  for(ll i = 1; i < a + 1; i++){
    sum = ((sum % m) * (i % m)) % m;
  }
  cout << sum << endl;
  return 0;
}
