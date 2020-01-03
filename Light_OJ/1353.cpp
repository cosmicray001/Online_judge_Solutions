#include <bits/stdc++.h>
#define le 20004
using namespace std;
vector<int> v[le];
bool in[le], ot[le], vis[le];
int xx, yy;
void bfs(int a){
  vis[a] = true;
  if(!ot[a]) xx++;
  if(!in[a]) yy++;
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    a = q.front();
    q.pop();
    for(int i = 0; i < v[a].size(); i++){
      int e = v[a][i];
      if(!vis[e]){
        vis[e] = true;
        if(!ot[e]) xx++;
        if(!in[e]) yy++;
      }
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, a, b, n;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &n);
    for(int i = 0; i < n - 1; i++){
      scanf("%d %d", &a, &b);
      v[a].push_back(b);
      ot[a] = true;
      in[b] = true;
    }
    xx = yy = 0;
    for(int i = 0; i < n; i++){
      if(!vis[i]) bfs(i);
    }
    printf("Case %d: %d\n", ++co, max(xx, yy));
    for(int i = 0; i < le; vis[i] = ot[i] = in[i] = false, v[i].clear(), i++);
  }
  return 0;
}
