#include <bits/stdc++.h>
using namespace std;
string ss = "aeiouAEIOU";
vector<string> v;
bool fnc(char ch){
  for(int i = 0; i < ss.size(); i++) if(ss[i] == ch) return true;
  return false;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  string s;
  while(getline(cin, s)){
    string a = "";
    for(int i = 0; i < s.size(); i++){
      if(!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) && a != ""){
        if(fnc(a[0])) cout << a << "ay" << s[i];
        else{
          for(int i = 1; i < a.size(); i++) printf("%c", a[i]);
          printf("%cay%c", a[0], s[i]);
        }
        a = "";
      }
      else if(!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) && a == "") cout << s[i];
      else a += s[i];
    }
    if(a != ""){
      if(fnc(a[0])) cout << a << "ay";
      else{
        for(int i = 1; i < a.size(); i++) printf("%c", a[i]);
        printf("%cay", a[0]);
      }
      a = "";
    }
    printf("\n");
  }
  return 0;
}
