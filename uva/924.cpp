#include <bits/stdc++.h>
#define le 2503
using namespace std;
vector<int> v[le];
bool vis[le];
int sz[le], dis[le], day, m;
void bfs(int a){
  memset(vis, 0, sizeof(vis));
  memset(dis, 0, sizeof(dis));
  memset(sz, 0, sizeof(sz));
  vis[a] = true;
  day = sz[0] = dis[a] = m = 0;
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    a = q.front();
    q.pop();
    for(int i = 0; i < v[a].size(); i++){
      int e = v[a][i];
      if(!vis[e]){
        vis[e] = true;
        dis[e] = dis[a] + 1;
        sz[dis[e]]++;
        if(sz[dis[e]] > m){
          m = sz[dis[e]];
          day = dis[e];
        }
        q.push(e);
      }
    }
  }
  printf("%d %d\n", m, day);
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int len, a, b;
  scanf("%d", &len);
  for(int i = 0; i < len; i++){
    scanf("%d", &a);
    while(a--){
      scanf("%d", &b);
      v[i].push_back(b);
    }
  }
  scanf("%d", &len);
  for(int i = 0; i < len; i++){
    scanf("%d", &a);
    if(v[a].size() == 0) printf("0\n");
    else bfs(a);
  }
  return 0;
}
