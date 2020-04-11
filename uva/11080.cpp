#include <bits/stdc++.h>
#define le 202
using namespace std;
vector<int> v[le];
bool vis[le];
int dis[le];
int bfs(int a){
  for(int i = 0; i < le; dis[i] = 0, i++);
  int w = 1, b = 0;
  vis[a] = true;
  dis[a] = 0;
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    int p = q.front();
    q.pop();
    for(int i = 0; i < v[p].size(); i++){
      int e = v[p][i], c = (dis[p] + 1) % 2;
      if(vis[e] == true && dis[e] != c) return -1;
      else if(vis[e] == false){
        vis[e] = true;
        dis[e] = (dis[p] + 1) % 2;
        if(dis[e] == 0) w++;
        else if(dis[e] == 1) b++;
        q.push(e);
      }
    }
  }
  int ve = min(b, w);
  if(ve == 0) return 1;
  else return ve;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int n, m, a, b, t;
  for(scanf("%d", &t); t--; ){
    for(int i = 0; i < le; vis[i] = false, v[i].clear(), i++);
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; scanf("%d %d", &a, &b), v[a].push_back(b), v[b].push_back(a), i++);
    int ans = 0;
    for(int i = 0; i < n; i++){
      if(vis[i] == false){
        int ve = bfs(i);
        if(ve == -1){
          ans = -1;
          break;
        }
        else ans += ve;
      }
    }
    printf("%d\n", ans);
  }
  return 0;
}
