#include <bits/stdc++.h>
using namespace std;
vector<pair<char, bool> > v;
void fnc(int a){
  for(int i = a; i >= 0; i--){
    if(v[i].second == true){
      v[i].second = false;
      break;
    }
  }
}
int main(){
  string s;
  cin >> s;
  for(int i = 0; i < s.size(); i++){
    if(s[i] != 'B') v.push_back(make_pair(s[i], true));
    else v.push_back(make_pair(s[i], false));
  }
  for(int i = 0; i < s.size(); i++){
    if(s[i] == 'B') fnc(i);
  }
  for(int i = 0; i < v.size(); i++) if(v[i].second == true) printf("%c", v[i].first);
  printf("\n");
  return 0;
}
