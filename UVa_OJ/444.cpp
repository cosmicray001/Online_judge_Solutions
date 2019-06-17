#include <bits/stdc++.h>
using namespace std;
string fnc(char ch){
  string a = "";
  int temp = ch;
  for(; temp > 0; temp /= 10) a += ((temp % 10) + '0');
  for(int i = 0, j = a.size() - 1; i < a.size() / 2; i++, j--){
    char t = a[i];
    a[i] = a[j];
    a[j] = t;
  }
  return a;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  string s, a;
  while(getline(cin, s)){
    bool f = true;
    for(int i = 0; i < s.size(); i++){
      if(s[i] >= '0' && s[i] <= '9'){
        f = false;
        break;
      }
    }
    if(f){
      a = "";
      for(int i = 0; i < s.size(); i++){
        a += fnc(s[i]);
      }
      for(int i = a.size() - 1; i >= 0; i--) printf("%c", a[i]);
    }
    else{
      int nu = 0;
      a = "";
      for(int i = s.size() - 1; i >= 0; ){
        if(s[i] == '1'){
          nu = (nu * 10) + (s[i] - '0');
          nu = (nu * 10) + (s[i - 1] - '0');
          nu = (nu * 10) + (s[i - 2] - '0');
          i -= 3;
        }
        else{
          nu = (nu * 10) + (s[i] - '0');
          nu = (nu * 10) + (s[i - 1] - '0');
          i -= 2;
        }
        printf("%c", nu);
        nu = 0;
      }

    }
    printf("\n");
  }
  return 0;
}
