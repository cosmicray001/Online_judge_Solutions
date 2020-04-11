#include <bits/stdc++.h>
#define le 10004
using namespace std;
vector<pair<int, int> > v[le];
vector<pair<int, int> > w[le];
bool vis[le];
bool fis[le];
int dis[le];
int len[le];
int p1[le];
int p2[le];
void dijkstra(int a){
  for(int i = 0; i < le; vis[i] = false, dis[i] = INT_MAX, p1[i] = -1, i++);
  dis[a] = 0;
  p1[a] = 0;
  priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;
  q.push(make_pair(0, a));
  while(!q.empty()){
    pair<int, int> p = q.top();
    q.pop();
    int no = p.second;
    if(vis[no]) continue;
    vis[no] = true;
    for(int i = 0; i < v[no].size(); i++){
      int e = v[no][i].second, w = v[no][i].first;
      if(dis[e] > dis[no] + w){
        dis[e] = dis[no] + w;
        p1[e] = max(p1[no], w);
        q.push(make_pair(dis[e], e));
      }
    }
  }
}
void idjkstra(int a){
  for(int i = 0; i < le; fis[i] = false, len[i] = INT_MAX, p2[i] = -1, i++);
  len[a] = 0;
  p2[a] = 0;
  priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;
  q.push(make_pair(0, a));
  while(!q.empty()){
    pair<int, int> p = q.top();
    q.pop();
    int no = p.second;
    if(fis[no]) continue;
    fis[no] = true;
    for(int i = 0; i < w[no].size(); i++){
      int e = w[no][i].second, ww = w[no][i].first;
      if(len[e] > len[no] + ww){
        len[e] = len[no] + ww;
        p2[e] = max(p2[no], ww);
        q.push(make_pair(dis[e], e));
      }
    }
  }
}
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int tt, co = 0, n, m, a, b, c, s, t, p;
  for(scanf("%d", &tt); tt--; ){
    scanf("%d %d %d %d %d", &n, &m, &s, &t, &p);
    for(int i = 0; i < m; i++){
      scanf("%d %d %d", &a, &b, &c);
      v[a].push_back(make_pair(c, b));
      w[b].push_back(make_pair(c, a));
    }
    dijkstra(s);
    idjkstra(t);
    int ans = -1;
    for(int i = 1; i < n + 1; i++){
      //cout << dis[i] + len[i] << endl;
      if(vis[i] && fis[i]) if(dis[i] + len[i] <= p) ans = max(ans, max(p1[i], p2[i]));
    }
    printf("Case %d: %d\n", ++co, ans);
    for(int i = 0; i < le; v[i].clear(), w[i].clear(), i++);
  }
}
