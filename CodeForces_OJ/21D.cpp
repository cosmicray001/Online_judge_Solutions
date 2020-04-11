#include <bits/stdc++.h>
#define le 20
using namespace std;
vector<pair<int, int> > v[le];
int sum;
bool vis[le];
bool mst(int a, int n){
  sum = 0;
  int co = 0;
  priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;
  q.push(make_pair(0, a));
  while(!q.empty()){
    pair<int, int> p = q.top();
    q.pop();
    int no = p.second, wt = p.second;
    if(vis[no]) continue;
    sum += wt;
    co++;
    vis[no] = true;
    for(int i = 0; i < v[no].size(); i++){
      int e = v[no][i].second;
      if(!vis[e]) q.push(v[no][i]);
    }
  }
  return (n == co);
}
int main(){
  freopen("input.txt", "r", stdin);
  int n, m, a, b, c;
  scanf("%d %d", &n, &m);
  for(int i = 0; i < m; i++){
    scanf("%d %d %d", &a, &b, &c);
    v[a].push_back(make_pair(c, b));
    v[b].push_back(make_pair(c, a));
  }
  bool f = mst(1, n);
  printf("%d\n", f ? sum : -1);
  return 0;
}
