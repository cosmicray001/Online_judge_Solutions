#include <bits/stdc++.h>
#define le 1004
using namespace std;
map<string, vector<string> > mp;
map<string, int> mp1;
vector<string> v;
map<string, int> in;
void clr(){
  mp.clear();
  mp1.clear();
  v.clear();
  in.clear();
}
void fnc(){
  queue<string> q;
  for(int i = 0; i < v.size(); i++){
    string s = v[i];
    if(in[s] == 0) q.push(s);
  }
  while(!q.empty()){
    string s = q.front();
    q.pop();
    for(int i = 0; i < mp[s].size(); i++){
      string e = mp[s][i];
      in[e]--;
      if(in[e] == 0) q.push(e);
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, len;
  for(scanf("%d", &t); t--; ){
    clr();
    string s, ss;
    scanf("%d", &len);
    for(int i = 0; i < len; i++){
      cin >> s >> ss;
      if(mp1[s]++ == 0) v.push_back(s);
      if(mp1[ss]++ == 0) v.push_back(ss);
      mp[s].push_back(ss);
      in[ss]++;
    }
    fnc();
    bool f = true;
    for(int i = 0; i < v.size() && f; i++){
      string s = v[i];
      if(in[s] > 0) f = false;
    }
    printf("Case %d: %s\n", ++co, f ? "Yes" : "No");
  }
  return 0;
}
