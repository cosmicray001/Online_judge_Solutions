#include <bits/stdc++.h>
#define le 102
using namespace std;
vector<int> v[le];
bool vis[le];
int dis[le];
void dijkstra(int a){
  memset(vis, 0, sizeof(vis));
  queue<int> q;
  q.push(a);
}
int main(){
  int t, co = 0, a, b, n, m;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++){
      scanf("%d %d", &a, &b);
      v[a].push_back(b);
      v[b].push_back(a);
    }
    scanf("%d %d", &a, &b);
    dijkstra(a);
  }
}
