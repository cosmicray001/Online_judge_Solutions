#include <bits/stdc++.h>
using namespace std;
int main(){
  int a;
  cin >> a;
  if(a % 2 == 0) a = (a / 2) * (a / 2);
  else a = (a / 2) * ((a / 2) + 1);
  cout << a << endl;
  return 0;
}
