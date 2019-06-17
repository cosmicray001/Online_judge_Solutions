#include <bits/stdc++.h>
using namespace std;
string n = " `1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
string m = " `123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg'~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\"";
void fnc(char ch){
  for(int i = 0; i < n.size(); i++) if(n[i] == ch) cout << m[i];
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  string s;
  while(getline(cin, s)){
    for(int i =0; i < s.size(); i++) fnc(s[i]);
    printf("\n");
  }
  return 0;
}
