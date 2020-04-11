#include <bits/stdc++.h>
#define le 1003
using namespace std;
vector<int> v[le];
vector<int> w[le];
map<string, int> mp;
vector<int> v1;
bool vis[le];
void dfs(int a){
  vis[a] = true;
  for(int i = 0; i < v[a].size(); i++){
    int e = v[a][i];
    if(!vis[e]) dfs(e);
  }
  v1.push_back(a);
}
void dfs1(int a){
  vis[a] = true;
  for(int i = 0; i < w[a].size(); i++){
    int e = w[a][i];
    if(!vis[e]) dfs1(e);
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int n, m;
  string a, b, x, y;
  while(scanf("%d %d", &n, &m) != EOF && (n || m)){
    int co = 0;
    for(int i = 0; i < n; i++){
      cin >> a >> b;
      a += b;
      mp[a] = ++co;
    }
    for(int i = 0; i < m; i++){
      cin >> a >> b;
      cin >> x >> y;
      a += b;
      x += y;
      v[mp[a]].push_back(mp[x]);
      w[mp[x]].push_back(mp[a]);
    }
    memset(vis, false, sizeof(vis));
    for(int i = 1; i < n + 1; i++){
      if(!vis[i]){
        dfs(i);
      }
    }
    int ans = 0;
    memset(vis, false, sizeof(vis));
    for(int i = v1.size() - 1; i >= 0; i--){
      if(!vis[v1[i]]){
        ans++;
        dfs1(v1[i]);
      }
    }
    printf("%d\n", ans);
    for(int i = 0; i < le; v[i].clear(), w[i].clear(), i++);
    mp.clear();
    v1.clear();
  }
  return 0;
}
