#include <bits/stdc++.h>
using namespace std;
vector<char> v;
set<string> ss;
string s;
void fnc(int i, int t, int len){
  if(i == len){
    if(v.size() == t){
      string a = "";
      for(int i = 0; i < v.size(); i++) a += v[i];
      ss.insert(a);
    }
    return;
  }
  fnc(i + 1, t, len);
  v.push_back(s[i]);
  fnc(i + 1, t, len);
  v.pop_back();
}
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int t;
  while(cin >> s >> t){
    fnc(0, t, s.size());
    for(set<string> :: iterator it = ss.begin(); it != ss.end(); it++) cout << (*it) << endl;
    v.clear();
    ss.clear();
  }
  return 0;
}
