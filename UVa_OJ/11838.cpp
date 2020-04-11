#include <bits/stdc++.h>
#define le 2003
using namespace std;
vector<int> v[le];
vector<int> w[le];
bool vis[le];
vector<int> ve;
void dfs(int a){
  vis[a] = true;
  for(int i = 0; i < v[a].size(); i++){
    int e = v[a][i];
    if(!vis[e]) dfs(e);
  }
  ve.push_back(a);
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
  int n, m, a, b, c;
  while(scanf("%d %d", &n, &m) != EOF && (n || m)){
    for(int i = 0; i < m; i++){
      scanf("%d %d %d", &a, &b, &c);
      if(c == 1){
        v[a].push_back(b);
        w[b].push_back(a);
      }
      else{
        v[a].push_back(b);
        v[b].push_back(a);
        w[a].push_back(b);
        w[b].push_back(a);
      }
    }
    memset(vis, false, sizeof(vis));
    for(int i = 1; i < n + 1; i++){
      if(!vis[i]) dfs(i);
    }
    memset(vis, false, sizeof(vis));
    int ans = 0;
    for(int i = ve.size() - 1; i >= 0; i--){
      if(!vis[ve[i]]){
        ans++;
        dfs1(ve[i]);
      }
      if(ans > 1) break;
    }
    printf("%d\n", (ans == 1) ? 1 : 0);
    for(int i = 0; i < le; v[i].clear(), w[i].clear(), i++);
    ve.clear();
  }
  return 0;
}
