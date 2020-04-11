#include <bits/stdc++.h>
using namespace std;
bool fnc(int a){
  int temp = a, sum = 0;
  for(; a > 0; a /= 10) sum = (sum * 10) + (a % 10);
  if(temp == sum) return 1;
  return 0;
}
int main(){
  int a, b, co = 0;
  cin >> a >> b;
  for(int i = a; i < b + 1; i++) if(fnc(i)) co++;
  cout << co << endl;
  return 0;
}
