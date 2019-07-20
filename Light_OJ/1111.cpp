#include <bits/stdc++.h>
using namespace std;
#define le 1003
vector <int> v[le];
vector<int> ct;
int dis[le];
bool vis[le];
void bfs(int a){
  memset(vis, false, sizeof(vis));
  vis[a] = true;
  dis[a]++;
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    int p = q.front();
    q.pop();
    for(int i = 0; i < v[p].size(); i++){
      int e = v[p][i];
      if(vis[e] == false){
        vis[e] = true;
        dis[e]++;
        q.push(e);
      }
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, k, n, m, a, b, co = 0;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d %d", &k, &n, &m);
    for(int i = 0; i < le; dis[i] = 0, v[i].clear(), i++);
    for(int i = 0; i < k; scanf("%d", &a), ct.push_back(a), i++);
    for(int i = 0; i < m; scanf("%d %d", &a, &b), v[a].push_back(b), i++);
    for(int i = 0; i < ct.size(); bfs(ct[i]), i++);
    int ans = 0;
    for(int i = 1; i < n + 1; i++) if(dis[i] == ct.size()) ans++;
    printf("Case %d: %d\n", ++co, ans);
    ct.clear();
  }
  return 0;
}
