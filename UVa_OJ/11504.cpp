#include <bits/stdc++.h>
#define le 100005
using namespace std;
vector<int> v[le];
bool vis[le];
void dfs(int a){
  vis[a] = true;
  for(int i = 0; i < v[a].size(); i++){
    if(!vis[v[a][i]]) dfs(v[a][i]);
  }
}
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int t, n, m, a, b;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++){
      scanf("%d %d", &a, &b);
      v[a].push_back(b);
      v[b].push_back(a);
    }
    int ans = 0;
    memset(vis, 0, sizeof(vis));
    for(int i = 1; i < n + 1; i++){
      if(!vis[i]){
        dfs(i);
        ans++;
      }
    }
    printf("%d\n", ans + 1);
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
