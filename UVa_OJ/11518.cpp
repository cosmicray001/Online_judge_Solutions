#include <bits/stdc++.h>
#define le 10004
using namespace std;
vector<int> v[le];
bool vis[le];
int bfs(int a){
  vis[a] = true;
  int ans = 1;
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    a = q.front();
    q.pop();
    for(int i = 0; i < v[a].size(); i++){
      int ve = v[a][i];
      if(!vis[ve]){
        vis[ve] = true;
        ans++;
        q.push(ve);
      }
    }
  }
  return ans;
}
int main(){
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, n, m, l, a, b;
  for(scanf("%d", &t); t--; ){
    memset(vis, 0, sizeof(vis));
    scanf("%d %d %d", &n, &m, &l);
    for(int i = 0; i < m; i++){
      scanf("%d %d", &a, &b);
      v[a].push_back(b);
      //v[b].push_back(a);
    }
    //printf("---> %d\n", l);
    int ans = 0;
    for(int i = 0; i < l; i++){
      scanf("%d", &a);
      //ans +=
      printf("%d\n", bfs(a));
    }
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
