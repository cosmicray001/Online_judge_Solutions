#include <bits/stdc++.h>
#define le 30
using namespace std;
map<string, vector<string> > v;
map<string, vector<string> > w;
map<string, int> mp;
vector<string> ve, st;
map<string, bool> vis;
void dfs(string a){
  vis[a] = true;
  for(int i = 0; i < v[a].size(); i++){
    string e = v[a][i];
    if(!vis[e]) dfs(e);
  }
  st.push_back(a);
}
void dfs1(string a){
  vis[a] = true;
  for(int i = 0; i < w[a].size(); i++){
    string e = w[a][i];
    if(!vis[e]) dfs1(e);
  }
  ve.push_back(a);
}
int main(){
  //freopen("input.txt", "r", stdin);
  int n, m, co = 0;
  string a, b;
  while(scanf("%d %d", &n, &m) != EOF && (n || m)){
    for(int i = 0; i < m; i++){
      cin >> a >> b;
      if(mp[a]++ == 0) ve.push_back(a);
      if(mp[b]++ == 0) ve.push_back(b);
      v[a].push_back(b);
      w[b].push_back(a);
    }
    vis.clear();
    for(int i = 0; i < ve.size(); i++){
      if(!vis[ve[i]]) dfs(ve[i]);
    }
    printf("Calling circles for data set %d:\n", ++co);
    vis.clear();
    for(int i = st.size() - 1; i >= 0; i--){
      if(!vis[st[i]]){
        ve.clear();
        dfs1(st[i]);
        if(ve.size() == 1) cout << ve[0] << "\n";
        else{
          for(int j = ve.size() - 1; j > 0; j--){
            cout << ve[j] << ", ";
          }
          cout << ve[0] << "\n";
        }
      }
    }
    v.clear();
    w.clear();
    ve.clear();
    st.clear();
    mp.clear();
  }
  return 0;
}
