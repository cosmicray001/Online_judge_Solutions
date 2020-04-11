#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  if(s[0] >= 'a' && s[0] <= 'z') s[0] = s[0] - 'a' + 'A';
  for(int i = 1; i < s.size(); i++){
    if(s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] - 'A' + 'a';
  }
  cout << s << endl;
  return 0;
}
