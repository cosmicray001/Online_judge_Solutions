#include <bits/stdc++.h>
#define le 102
using namespace std;
vector<int> v[le];
bool vis[le];
int bfs(int a){
  memset(vis, 0, sizeof(vis));
  int ans = 0;
  vis[a] = true;
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    a = q.front();
    q.pop();
    for(int i = 0; i < v[a].size(); i++){
      int e = v[a][i];
      if(!vis[e]){
        vis[e] = true;
        ans++;
        q.push(e);
      }
    }
  }
  return ans;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int n, a, b;
  while(scanf("%d", &n) != EOF && n){
    for(int i = 1; i < n + 1; i++){
      scanf("%d", &a);
      while(a--){
        scanf("%d", &b);
        v[i].push_back(b);
      }
    }
    int m = 0, ve;
    for(int i = 1; i < n + 1; i++){
      int x = bfs(i);
      if(x > m){
        m = x;
        ve = i;
      }
    }
    printf("%d\n", ve);
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
