#include <bits/stdc++.h>
#define le 102
using namespace std;
map<string, vector<string> > mp;
map<string, int> ct;
map<string, bool> vis;
void bfs(string a){
  ct[a] = 0;
  vis[a] = true;
  queue<string> q;
  q.push(a);
  while(!q.empty()){
    string p = q.front();
    q.pop();
    for(int i = 0; i < mp[p].size(); i++){
      string e = mp[p][i];
      if(!vis[e]){
        vis[e] = true;
        ct[e] = ct[p] + 1;
        q.push(e);
      }
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  int len;
  string s, s1, s2;
  bool f = false;
  for(scanf("%d", &len); len--; ){
    cin >> s >> s1 >> s2;
    ct[s] = -1;
    ct[s1] = -1;
    ct[s2] = -1;
    if(s == "Isenbaev" || s1 == "Isenbaev" || s2 == "Isenbaev") f = true;
    mp[s].push_back(s1);
    mp[s].push_back(s2);
    mp[s1].push_back(s);
    mp[s1].push_back(s2);
    mp[s2].push_back(s);
    mp[s2].push_back(s1);
  }
  if(f) bfs("Isenbaev");
  for(map<string, int> :: iterator it = ct.begin(); it != ct.end(); it++){
    cout << (*it).first << " ";
    if((*it).second != -1) cout << (*it).second << endl;
    else cout << "undefined" << endl;
  }
  return 0;
}
