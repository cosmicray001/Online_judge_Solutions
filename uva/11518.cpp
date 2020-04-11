#include <bits/stdc++.h>
#define le 10004
using namespace std;
vector <int> v[le];
bool vis[le];
int bfs(int a){
  vis[a] = true;
  int co = 1;
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    int p = q.front();
    q.pop();
    for(int i = 0; i < v[p].size(); i++){
      int e = v[p][i];
      if(vis[e] == false){
        vis[e] = true;
        co++;
        q.push(e);
      }
    }
  }
  return co;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, n, m, l, a, b;
  for(scanf("%d", &t); t--; ){
    memset(vis, false, sizeof(vis));
    scanf("%d %d %d", &n, &m, &l);
    for(int i = 0; i < m; scanf("%d %d", &a, &b), v[a].push_back(b), i++);
    int ans = 0;
    for(int i = 0; i < l; i++){
      scanf("%d", &a);
      if(!vis[a]) ans += bfs(a);
    }
    printf("%d\n", ans);
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
