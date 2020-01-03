#include <bits/stdc++.h>
#define le 100005
using namespace std;
vector<int> v[le];
bool vis[le], f;
int dis[le], pa[le], lo, k;
void dfs(int a){
  vis[a] = true;
  for(int i = 0; i < v[a].size(); i++){
    int e = v[a][i];
    if(vis[e] && pa[a] != e){
      if(dis[e] >= dis[lo]) lo = e;
      f = true;
      if(dis[lo] >= k + 1) return;
    }
    if(!vis[e]){
      dis[e] = dis[a] + 1;
      pa[e] = a;
      dfs(e);
    }
  }
}
void fnc(int a){
  if(pa[a] == a){
    printf("%d", a);
    return;
  }
  fnc(pa[a]);
  printf(" %d", a);
}
int main(){
  //freopen("input.txt", "r", stdin);
  int n, m, a, b;
  scanf("%d %d %d", &n, &m, &k);
  for(int i = 0; i < m; i++){
    scanf("%d %d", &a, &b);
    v[a].push_back(b);
    v[b].push_back(a);
  }
  for(int i = 0; i < n + 1; vis[i] = false, dis[i] = 0, pa[i] = i, i++);
  for(int i = 1; i < n + 1; i++){
    if(!vis[i]){
      f = false;
      lo = i;
      dis[i] = 1;
      dfs(i);
      if(f && dis[lo] >= k + 1){
        printf("%d\n", dis[lo]);
        fnc(lo);
        break;
      }
    }
  }
  return 0;
}
