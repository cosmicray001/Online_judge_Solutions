#include <bits/stdc++.h>
#define le 102
using namespace std;
vector<int> v[le];
bool vis[le];
int sdis[le], fdis[le];
void bfs(int a){
  for(int i = 0; i < le; vis[i] = false, sdis[i] = 0, i++);
  vis[a] = true;
  sdis[a] = 0;
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    int p = q.front();
    q.pop();
    for(int i = 0; i < v[p].size(); i++){
      int e = v[p][i];
      if(!vis[e]){
        vis[e] = true;
        sdis[e] = sdis[p] + 1;
        q.push(e);
      }
    }
  }
}
void bfs1(int a){
  for(int i = 0; i < le; vis[i] = false, fdis[i] = 0, i++);
  vis[a] = true;
  fdis[a] = 0;
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    int p = q.front();
    q.pop();
    for(int i = 0; i < v[p].size(); i++){
      int e = v[p][i];
      if(!vis[e]){
        vis[e] = true;
        fdis[e] = fdis[p] + 1;
        q.push(e);
      }
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, n, m, a, b;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++){
      scanf("%d %d", &a, &b);
      v[a].push_back(b);
      v[b].push_back(a);
    }
    scanf("%d %d", &a, &b);
    bfs(a);
    bfs1(b);
    int mm = -INT_MAX;
    for(int i = 0; i < n; i++) mm = max(mm, sdis[i] + fdis[i]);
    printf("Case %d: %d\n", ++co, mm);
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
