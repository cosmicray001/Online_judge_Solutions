#include <bits/stdc++.h>
#define le 22
using namespace std;
int len, n[le];
int fnc(string s){
  int a = 0;
  for(int i = 0; i < s.size(); i++) a = (a * 10) + (s[i] - '0');
  return a;
}
int main(){
  //freopen("input.txt", "r", stdin);
  int t;
  string s;
  for(scanf("%d", &t), getchar(); t--; ){
    getline(cin, s);
    string a = "";
    int j = 0, co = 0;
    for(int i = 0; i < s.size(); i++){
      if(s[i] == ' ' && a != ""){
        n[j] = fnc(a);
        co += n[j++];
        a = "";
      }
      else a += s[i];
    }
    if(a != ""){
      n[j] = fnc(a);
      co += n[j++];
    }
    if(co & 1){
      printf("NO\n");
      continue;
    }
    len = j;
    bool f = true;
    int ct = pow(2, len), sum = 0;
    for(int i = 0; i < ct; i++){
      for(int j = 0; j < len; j++){
        if((i & (1 << j)) > 0) sum += n[j];
      }
      if(co >> 1 == sum){
        printf("YES\n");
        f = false;
        break;
      }
      else sum = 0;
    }
    if(f) printf("NO\n");
  }
  return 0;
}
