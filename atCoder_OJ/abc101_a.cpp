#include <bits/stdc++.h>
using namespace std;
int main(){
  int co = 0;
  string s;
  cin >> s;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == '+') co++;
    else co--;
  }
  cout << co << endl;
  return 0;
}
