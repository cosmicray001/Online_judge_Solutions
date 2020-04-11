#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
int fnc(string s){
  int sum = 0;
  for(int i = 0; i < s.size(); i++) sum = (sum * 10) + (s[i] - '0');
  return sum;
}
int main(){
  int a, co = 0, b;
  string s;
  while(scanf("%d", &a) != EOF){
    if(co++ != 0) printf("\n");
    while(cin >> s){
      if(s[0] >= '0' && s[0] <= '9'){
        b = fnc(s);
        break;
      }
      else mp[s]++;
    }
  }
}
