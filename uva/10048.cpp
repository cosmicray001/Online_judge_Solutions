#include <bits/stdc++.h>
#define le 102
using namespace std;
bool vis[le];
int cost[le];
vector<pair<int, int> > v[le];
void mst(int n, int a){
  memset(vis, 0, sizeof(vis));
  for(int i = 0; i < le; cost[i] = INT_MAX, i++);
  cost[a] = 0;
  priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;
  q.push(make_pair(0, a));
  while(!q.empty()){
    pair<int, int> p = q.top();
    q.pop();
    int n = p.second;
    if(vis[n]) continue;
    vis[n] = true;
    for(int i = 0; i < v[n].size(); i++){
      int e = v[n][i].second;
      int w = v[n][i].first;
      if(!vis[e]){
        cost[e] = max(cost[n], min(w, cost[e]));
        q.push(v[n][i]);
      }
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int co = 0, n, m, q, a, b, c;
  while(scanf("%d %d %d", &n, &m, &q) != EOF && (n || m || q)){
    if(co) printf("\n");
    for(int i = 0; i < m; i++){
      scanf("%d %d %d", &a, &b, &c);
      v[a].push_back(make_pair(c, b));
      v[b].push_back(make_pair(c, a));
    }
    printf("Case #%d\n", ++co);
    while(q--){
      scanf("%d %d", &a, &b);
      mst(n, a);
      if(!vis[b]) printf("no path\n");
      else printf("%d\n", cost[b]);
    }
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
