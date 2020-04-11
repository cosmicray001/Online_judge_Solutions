#include <bits/stdc++.h>
#define le 100005
using namespace std;
vector<int> v[le];
bool vis[le];
void dfs(int a){
  vis[a] = true;
  for(int i = 0; i < v[a].size(); i++){
    int e = v[a][i];
    if(!vis[e]) dfs(e);
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  int n, m, a, b;
  scanf("%d %d", &n, &m);
  for(int i = 0; i < m; i++){
    scanf("%d %d", &a, &b);
    v[a].push_back(b);
    v[b].push_back(a);
  }
  int ans = 0;
  for(int i = 1; i < n + 1; i++){
    if(!vis[i]){
      ans++;
      dfs(i);
    }
  }
  printf("%d\n", ans);
  return 0;
}
