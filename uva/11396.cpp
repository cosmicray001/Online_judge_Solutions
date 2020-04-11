#include <bits/stdc++.h>
#define le 303
using namespace std;
vector<int> v[le];
bool vis[le];
int dis[le];
bool bfs(int a){
  for(int i = 0; i < le; dis[i] = 0, i++);
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
        dis[e] = (dis[p] + 1) % 2;
        q.push(e);
      }
    }
  }
  return true;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int n, a, b;
  while(scanf("%d", &n) != EOF && n){
    for(int i = 0; i < le; vis[i] = false, v[i].clear(), i++);
    while(scanf("%d %d", &a, &b) != EOF && (a || b)){
      v[a].push_back(b);
      v[b].push_back(a);
    }
    bool f = true;
    for(int i = 1; i < n + 1; i++){
      if(vis[i] == false){
        if(bfs(i) == false){
          f = false;
          break;
        }
      }
    }
    printf("%s\n", f ? "YES" : "NO");
  }
  return 0;
}
