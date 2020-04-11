#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  ll a, b, c;
  cin >> a >> b >> c;
  if(a > b) swap(a, b);
  if(a == 0 && b == 0){
    cout << 1 << endl;
    return 0;
  }
  else if(a == 0){
    cout << (b / c) + 1 << endl;
    return 0;
  }
  else if(a == 1){
    cout << b / c << endl;
    return 0;
  }
  else{
    cout << (b / c) - ((a - 1) / c) << endl;
    return 0;
  }
  return 0;
}
