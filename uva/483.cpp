#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  string s;
  while(getline(cin, s)){
    string a = "", b = "";
    for(int i = 0; i < s.size(); i++){
      if(s[i] == ' ' && a == "") printf(" ");
      else if(s[i] == ' ' && a != ""){
        for(int j = a.size() - 1; j >= 0; j--) printf("%c", a[j]);
        printf(" ");
        a = "";
      }
      else a += s[i];
    }
    if(a != "") for(int i = a.size() - 1; i >= 0; i--) printf("%c", a[i]);
    printf("\n");
  }
  return 0;
}
