#include <bits/stdc++.h>
#define le 102
using namespace std;
vector<pair<int, int> > v[le];
bool vis[le];
int dis[le], n;
bool dijkstra(int a, int e, int t){
  for(int i = 0; i < le; vis[i] = false, dis[i] = INT_MAX, i++);
  dis[a] = 0;
  priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;
  q.push(make_pair(0, a));
  while(!q.empty()){
    pair<int, int> p = q.top();
    q.pop();
    int n = p.second;
    if(vis[n]) continue;
    vis[n] = true;
    for(int i = 0; i < v[n].size(); i++){
      int ve = v[n][i].second, w = v[n][i].first;
      if(dis[ve] > dis[n] + w){
        dis[ve] = dis[n] + w;
        if(ve == e) if(dis[ve] <= t) return 1;
        q.push(make_pair(dis[ve], ve));
      }
    }
  }
  return (dis[e] <= t);
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int m, e, t, a, b, c, co = 0, tt, cc = 0;
  for(scanf("%d", &tt); tt--; ){
    for(int i = 0; i < le; vis[i] = false, dis[i] = INT_MAX, i++);
    co = 0;
    if(cc++) printf("\n");
    scanf("%d %d %d %d", &n, &e, &t, &m);
    for(int i = 0; i < m; scanf("%d %d %d", &a, &b, &c), v[a].push_back(make_pair(c, b)), i++);
    for(int i = 1; i < n + 1; i++) if(dijkstra(i, e, t)) co++;
    printf("%d\n", co);
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
