#include <bits/stdc++.h>
#define le 502
using namespace std;
vector<pair<int, int> > v[le];
bool vis[le];
long long int dis[le];
int ct[le];
void mst(int a, int b, int n){
  memset(vis, 0, sizeof(vis));
  memset(dis, 0, sizeof(dis));
  memset(ct, 0, sizeof(ct));
  dis[a] = ct[a] = 0;
  priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;
  q.push(make_pair(0, a));
  while(!q.empty()){
    pair<int, int> p = q.top();
    q.pop();
    int n = p.second;
    if(vis[n]) continue;
    vis[n] = true;
    for(int i = 0; i < (int)v[n].size(); i++){
      int e = v[n][i].second;
      int w = v[n][i].first;
      if(!vis[e]){
        dis[e] = dis[n] + w;
        ct[e] = ct[n] + 1;
        q.push(v[n][i]);
      }
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  int t, co = 0, a, b, c, n, m;
  for(scanf("%d", &t); t--; ){
    scanf("%d%d", &n, &m);
    for(int i = 0; i < m; i++){
      scanf("%d%d%d", &a, &b, &c);
      v[a].push_back(make_pair(c, b));
    }
    scanf("%d%d", &a, &b);
    mst(a, b, n);
    if(!vis[b]) printf("-1\n");
    else{
      double sum = dis[b] * 1.0;
      printf("%.1lf\n", sum / ct[b]);
    }
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
