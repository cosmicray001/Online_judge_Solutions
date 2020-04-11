#include <bits/stdc++.h>
#define le 10004
using namespace std;
int in[le];
vector<int> v[le];
vector<int> ve;
bool vis[le];
void dfs(int a){
  vis[a] = true;
  for(int i = 0; i < v[a].size(); i++){
    if(!vis[v[a][i]]) dfs(v[a][i]);
  }
  ve.push_back(a);
}
void dfs1(int a){
  vis[a] = true;
  for(int i = 0; i < v[a].size(); i++){
    if(!vis[v[a][i]]) dfs1(v[a][i]);
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, a, b, n, m;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; scanf("%d %d", &a, &b), v[a].push_back(b), i++);
    memset(vis, false, sizeof(vis));
    for(int i = 1; i < n + 1; i++) if(!vis[i]) dfs(i);
    memset(vis, false, sizeof(vis));
    int ans = 0;
    for(int i = ve.size() - 1; i >= 0; i--) if(!vis[ve[i]]){
      ans++;
      dfs1(ve[i]);
    }
    printf("Case %d: %d\n", ++co, ans);
    for(int i = 0; i < le; v[i].clear(), in[i] = 0, i++);
    ve.clear();
  }
  return 0;
}
