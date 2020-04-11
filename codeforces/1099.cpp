#include <bits/stdc++.h>
#define le 200005
using namespace std;
vector<pair<int, int> > v[le];
bool vis[le];
int dis[le];
int dijkstra(int a){
  memset(vis, 0, sizeof(vis));
  for(int i = 0; i < le; dis[i] = INT_MAX, i++);
  dis[a] = 0;
  int sum = 0;
  priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;
  q.push(make_pair(0, a));
  while(!q.empty()){
    pair<int, int> p = q.top();
    q.pop();
    int n = p.second;
    if(vis[n]) continue;
    vis[n] = true;
    sum += p.first;
    for(int i = 0; i < v[n].size(); i++){
      int e = v[n][i].second;
      int w = v[n][i].first;
      if(dis[e] > dis[n] + w){
        dis[e] = dis[n] + w;
        q.push(make_pair(dis[e], e));
      }
    }
  }
  return sum;
}
int main(){
  freopen("input.txt", "r", stdin);
  int t, co = 0, n, m, a, b, c;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++){
      scanf("%d %d %d", &a, &b, &c);
      v[a].push_back(make_pair(c, b));
      v[a].push_back(make_pair(c * 2 + c, b));
      v[b].push_back(make_pair(c, a));
      v[b].push_back(make_pair(c * 2 + c, a));
    }
    printf("%d %d\n", dijkstra(1), ++co);
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
