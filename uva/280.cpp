#include <bits/stdc++.h>
#define le 102
using namespace std;
vector<int> v[le];
bool vis[le];
int n;
void bfs(int a){
  memset(vis, 0, sizeof(vis));
  queue<int> q;
  q.push(a);
  int ans = 0;
  while(!q.empty()){
    int p = q.front();
    q.pop();
    for(int i = 0; i < v[p].size(); i++){
      int y = v[p][i];
      if(!vis[y]){
        vis[y] = true;
        ans++;
        q.push(y);
      }
    }
  }
  printf("%d", n - ans);
  for(int i = 1; i < n + 1; i++){
    if(vis[i] == false) printf(" %d", i);
  }
  printf("\n");
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int a, b;
  while(scanf("%d", &n) != EOF && n){
    while(true){
      scanf("%d", &a);
      if(!a) break;
      while(scanf("%d", &b) != EOF && b) v[a].push_back(b);
    }
    scanf("%d", &a);
    while(a--){
      scanf("%d", &b);
      bfs(b);
    }
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
