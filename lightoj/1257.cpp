#include <bits/stdc++.h>
#define le 30004
#define ll long long int
using namespace std;
vector<pair<ll, int> > v[le];
bool vis[le];
ll dis[le], len[le];
int bfs(int a){
  for(int i = 0; i < le; vis[i] = false, dis[i] = 0, i++);
  vis[a] = true;
  int lo = a;
  ll mx = -LONG_MAX;
  queue<pair<ll, int> > q;
  q.push(make_pair(0, a));
  while(!q.empty()){
    pair<ll, int> p = q.front();
    q.pop();
    int no = p.second;
    for(int i = 0; i < v[no].size(); i++){
      int e = v[no][i].second;
      if(!vis[e]){
        vis[e] = true;
        dis[e] = dis[no] + v[no][i].first;
        if(dis[e] > mx){
          mx = dis[e];
          lo = e;
        }
        q.push(make_pair(dis[e], e));
      }
    }
  }
  return lo;
}
void bfs1(int a){
  for(int i = 0; i < le; vis[i] = false, len[i] = 0, i++);
  vis[a] = true;
  queue<pair<ll, int> > q;
  q.push(make_pair(0, a));
  while(!q.empty()){
    pair<ll, int> p = q.front();
    q.pop();
    int no = p.second;
    for(int i = 0; i < v[no].size(); i++){
      int e = v[no][i].second;
      if(!vis[e]){
        vis[e] = true;
        len[e] = len[no] + v[no][i].first;
        q.push(make_pair(dis[e], e));
      }
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, a, b, n;
  ll c;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &n);
    for(int i = 0; i < n - 1; i++){
      scanf("%d %d %lld", &a, &b, &c);
      v[a].push_back(make_pair(c, b));
      v[b].push_back(make_pair(c, a));
    }
    int st = bfs(0);
    int ed = bfs(st);
    bfs1(ed);
    printf("Case %d:\n", ++co);
    for(int i = 0; i < n; i++) printf("%lld\n", max(dis[i], len[i]));
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
