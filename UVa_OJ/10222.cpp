#include <bits/stdc++.h>
using namespace std;
string s1 = "qwertyuiop[]asdfghjkl;'zxcvbnm,.";
string s2 = "QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,.";
void fnc(char ch){
  for(int i = 0; i < s1.size(); i++){
    if(s1[i] == ch){
      cout << s1[i - 2];
      return;
    }
  }
  for(int i = 0; i < s2.size(); i++){
    if(s2[i] == ch){
      printf("%c", s2[i - 2] - 'A' + 'a');
      return;
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  string s;
  while(getline(cin, s)){
    for(int i = 0; i < s.size(); i++){
      if(s[i] != ' ') fnc(s[i]);
      else cout << s[i];
    }
    printf("\n");
  }
  return 0;
}
