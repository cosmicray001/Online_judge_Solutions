#include <bits/stdc++.h>
#define le 100005
#define ll long long int
using namespace std;
bool vis[le];
ll dis[le];
int pa[le];
#define ma 10000000000000ll
vector<pair<ll, int> > v[le];
void dijkstra(int a){
  memset(vis, 0, sizeof(vis));
  for(int i = 0; i < le; dis[i] = ma, i++);
  dis[a] = 0;
  pa[a] = a;
  priority_queue<pair<ll, int>, vector<pair<ll, int> >, greater<pair<ll, int> > > q;
  q.push(make_pair(0, a));
  while(!q.empty()){
    pair<ll, int> p = q.top();
    q.pop();
    int n = p.second;
    if(vis[n]) continue;
    vis[n] = true;
    for(int i = 0; i < v[n].size(); i++){
      int e = v[n][i].second;
      ll w = v[n][i].first;
      if(dis[e] > dis[n] + w){
        dis[e] = dis[n] + w;
        pa[e] = n;
        q.push(make_pair(dis[e], e));
      }
    }
  }
}
void pri(int a){
  if(pa[a] == a){
    printf("%d", a);
    return;
  }
  pri(pa[a]);
  printf(" %d", a);
}
int main(){
  //freopen("input.txt", "r", stdin);
  int n, m, a, b;
  ll c;
  scanf("%d %d", &n, &m);
  for(int i = 0; i < m; i++){
    scanf("%d %d %lld", &a, &b, &c);
    v[a].push_back(make_pair(c, b));
    v[b].push_back(make_pair(c, a));
  }
  dijkstra(1);
  if(vis[n]){
    pri(n);
    printf("\n");
  }
  else printf("-1\n");
  return 0;
}
