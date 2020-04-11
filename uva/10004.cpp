#include <bits/stdc++.h>
#define le 202
using namespace std;
vector<int> v[le];
bool vis[le];
int dis[le];
bool bfs(int a){
  for(int i = 0; i < le; vis[i] = false, dis[i] = -1, i++);
  vis[a] = true;
  dis[a] = 0;
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    int p = q.front();
    q.pop();
    for(int i = 0; i < v[p].size(); i++){
      int e = v[p][i], w = (dis[p] + 1) % 2;
      if(vis[e] && dis[e] != w) return false;
      else if(vis[e] == false){
        vis[e] = true;
        dis[e] = w;
        q.push(e);
      }
    }
  }
  return true;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int n, m, a, b;
  while(scanf("%d", &n) != EOF && n){
    scanf("%d", &m);
    for(int i = 0; i < m; scanf("%d %d", &a, &b), v[a].push_back(b), v[b].push_back(a), i++);
    printf("%s\n", bfs(0) ? "BICOLORABLE." : "NOT BICOLORABLE.");
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
