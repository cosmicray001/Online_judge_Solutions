#include <bits/stdc++.h>
#define le 2003
using namespace std;
vector<int> v[le];
bool vis[le];
int dis[le], ans;
void bfs(int a){
  for(int i = 0; i < le; vis[i] = false, dis[i] = 0, i++);
  dis[a] = 0;
  queue<int> q;
  q.push(a);
  bool f = true;
  while(!q.empty() && f){
    int p = q.front();
    q.pop();
    for(int i = 0; i < v[p].size(); i++){
      int ve = v[p][i];
      if(!vis[ve]){
        vis[ve] = true;
        dis[ve] = dis[p] + 1;
        if(ve == a){
          f = false;
          break;
        }
        q.push(ve);
      }
    }
  }
  ans = dis[a];
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int n, a;
  scanf("%d", &n);
  for(int i = 1; i < n + 1; i++) for(int j = 1; j < n + 1; j++){
    scanf("%d", &a);
    if(a == 1) v[i].push_back(j);
  }
  for(int i = 1; i < n + 1; i++){
    bfs(i);
    if(!vis[i]) printf("NO WAY\n");
    else printf("%d\n", ans);
  }
  return 0;
}
