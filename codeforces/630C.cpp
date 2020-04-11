#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  ll a, sum = 0;
  cin >> a;
  for(ll i = 1; i < a + 1; i++) sum += pow(2, i);
  cout << sum << endl;
  return 0;
}
