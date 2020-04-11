#include <bits/stdc++.h>
#define le 100005
#define ll long long int
#define mx 1000000000012
using namespace std;
vector<pair<ll, int> > v[le];
bool vis[le];
int pa[le];
ll dis[le];
void dijkstra(int a, int x){
  for(int i = 0; i < le; vis[i] = false, dis[i] = mx, i++);
  dis[a] = 0;
  pa[a] = -1;
  priority_queue<pair<ll, int>, vector<pair<ll, int> >, greater<pair<ll, int> > > q;
  q.push(make_pair(0, a));
  while(!q.empty()){
    pair<ll, int> p = q.top();
    q.pop();
    int no = p.second;
    //if(vis[no]) continue;
    //vis[no] = true;
    for(int i = 0; i < v[no].size(); i++){
      int e = v[no][i].second;
      ll w = v[no][i].first;
      if(dis[e] > dis[no] + w){
        dis[e] = dis[no] + w;
        pa[e] = no;
        q.push(make_pair(dis[e], e));
      }
    }
  }
}
void fnc(int a){
  if(pa[a] == -1){
    printf("%d", a);
    return;
  }
  else fnc(pa[a]);
  printf(" %d", a);
}
int main(){
  //freopen("input.txt", "r", stdin);
  //cout << LONG_MAX << endl;
  int n, m, a, b;
  ll c;
  scanf("%d %d", &n, &m);
  for(int i = 0; i < m; i++){
    scanf("%d %d %lld", &a, &b, &c);
    v[a].push_back(make_pair(c, b));
    v[b].push_back(make_pair(c, a));
  }
  dijkstra(1, n);
  if(dis[n] == mx) printf("-1\n");
  else{
    fnc(n);
    printf("\n");
  }
  return 0;
}
