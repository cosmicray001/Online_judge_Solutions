#include <bits/stdc++.h>
#define le 20004
using namespace std;
vector<int> v[le], w[le], nd[le];
vector<int> st, ans;
bool vis[le];
int in[le], ot[le], pa[le];
void dfs(int a){
  vis[a] = true;
  for(int i = 0; i < v[a].size(); i++) if(!vis[v[a][i]]) dfs(v[a][i]);
  st.push_back(a);
}
void dfs1(int a){
  vis[a] = true;
  for(int i = 0; i < w[a].size(); i++) if(!vis[w[a][i]]) dfs1(w[a][i]);
  ans.push_back(a);
}
int main(){
  int t, co = 0, a, b, n, m;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++){
      scanf("%d %d", &a, &b);
      v[a].push_back(b);
      w[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    for(int i = 1; i < n + 1; i++) if(!vis[i]) dfs(i);
    memset(vis, false, sizeof(vis));
    int cc = 0;
    for(int i = 0; i < st.size(); i++){
      if(!vis[i]){
        ans.clear();
        dfs1(i);
        for(int j = 0; j < ans.size(); j++){
          nd[co].push_back(ans[j]);
          pa[ans[j]] = cc;
        }
        cc++;
      }
    }
    memset(vis, false, sizeof(vis));
    for(int i = 0; i < cc; i++){

    }
  }
  return 0;
}
