#include <bits/stdc++.h>
#define le 20004
using namespace std;
vector<pair<int, int> > mp[le];
int dis[le];
bool vis[le];
void dijkstra(int a){
  memset(vis, 0, sizeof(vis));
  for(int i = 0; i < le; dis[i] = INT_MAX, i++);
  dis[a] = 0;
  priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;
  q.push(make_pair(0, a));
  while(!q.empty()){
    pair<int, int> p = q.top();
    q.pop();
    int n = p.second;
    if(vis[n]) continue;
    vis[n] = true;
    for(int i = 0; i < (int)mp[n].size(); i++){
      int e = mp[n][i].second;
      int w = mp[n][i].first;
      if(dis[e] > dis[n] + w){
        dis[e] = dis[n] + w;
        q.push(make_pair(dis[e], e));
      }
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, n, m, s, d, a, b, c;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d %d %d", &n, &m, &s, &d);
    while(m--){
      scanf("%d %d %d", &a, &b, &c);
      mp[a].push_back(make_pair(c, b));
      mp[b].push_back(make_pair(c, a));
    }
    dijkstra(s);
    if(!vis[d]) printf("Case #%d: unreachable\n", ++co);
    else printf("Case #%d: %d\n", ++co, dis[d]);
    for(int i = 0; i < le; mp[i].clear(), i++);
  }
  return 0;
}
