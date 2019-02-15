#include <bits/stdc++.h>
using namespace std;
int n, m;
map<string, vector<string> > mp;
map<string, string> p;
void bfs(string s){
  map<string, bool> vis;
  vis[s] = true;
  p[s] = "root";
  queue<string> q;
  q.push(s);
  while(!q.empty()){
    s = q.front();
    q.pop();
    for(int i = 0; i < mp[s].size(); i++){
      string a = mp[s][i];
      if(!vis[a]){
        vis[a] = true;
        p[a] = s;
        q.push(a);
      }
    }
  }
}
void pri(string s){
  if(p[s] == "root"){
    printf("%c", s[0]);
    return;
  }
  pri(p[s]);
  printf("%c", s[0]);
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0;
  string a, b;
  for(scanf("%d", &t); t--; ){
    if(co++) printf("\n");
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
      cin >> a >> b;
      mp[a].push_back(b);
      mp[b].push_back(a);
    }
    for(int i = 0; i < m; i++){
      cin >> a >> b;
      bfs(a);
      pri(b);
      printf("\n");
      p.clear();
    }
    mp.clear();
  }
  return 0;
}
