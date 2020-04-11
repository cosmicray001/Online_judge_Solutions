#include <bits/stdc++.h>
#define le 502
#define ll long long int
using namespace std;
vector<pair<ll, int> > v[le];
double ans = 0.0;
bool vis[le];
void bfs(int a){
  for(int i = 0; i < le; vis[i] = false, i++);
  int co = 1;
  priority_queue<pair<ll, int> > q;
  q.push(make_pair(0, a));
  while(!q.empty()){
    pair<int, int> p = q.top();
    q.pop();
    int no = p.second;
    if(vis[no]) continue;
    vis[no] = true;
    for(int i = 0; i < v[no].size(); i++){

    }
  }
}
int main(){
  int n, m, a, b;
  ll c;
  while(scanf("%d %d", &n, &m) != EOF && (n || m)){
    for(int i = 0; i < m; scanf("%d %d %lld", &a, &b, &c), v[a].push_back(make_pair(c, b)), v[b].push_back(make_pair(c, a)), i++);
    ans = 0;
    for(int i = 1; i < n + 1; i++) bfs(i);
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
