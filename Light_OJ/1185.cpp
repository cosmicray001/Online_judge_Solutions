#include <bits/stdc++.h>
#define le 102
using namespace std;
vector<int> v[le];
bool vis[le];
int dis[le];
int bfs(int a, int x){
  for(int i = 0; i < le; vis[i] = false, dis[i] = 0, i++);
  vis[a] = true;
  dis[a] = 0;
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    int p = q.front();
    q.pop();
    for(int i = 0; i < v[p].size(); i++){
      int e = v[p][i];
      if(vis[e] == false){
        vis[e] = true;
        dis[e] = dis[p] + 1;
        if(e == x) return (dis[e]);
        q.push(e);
      }
    }
  }
  return dis[x];
}
int main(){
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, n, m, a, b;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; scanf("%d %d", &a, &b), v[a].push_back(b), v[b].push_back(a), i++);
    printf("Case %d: %d\n", ++co, bfs(1, n));
    for(int i = 1; i < n + 1; i++){
      printf("%d---. :", i);
      for(int j = 0; j < v[i].size(); j++){
        printf("%d  ", v[i][j]);
      }
      printf("\n");
    }
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
