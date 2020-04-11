#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  string s;
  int a = 0, b = 0;
  cin >> s;
  for(int i = 0; i < s.size(); i++){
    if(s[i] >= 'a' && s[i] <= 'z') a++;
    else b++;
  }
  if(b > a){
    for(int i = 0; i < s.size(); i++){
      if(s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 'a' + 'A';
    }
  }
  else{
    for(int i = 0; i < s.size(); i++){
      if(s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] - 'A' + 'a';
    }
  }
  cout << s << endl;
  return 0;
}
