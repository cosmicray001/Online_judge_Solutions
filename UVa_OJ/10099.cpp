#include <bits/stdc++.h>
#define le 102
using namespace std;
int n, m, a, b, c;
struct edge{
  int p, co;
};
bool vis[le];
edge pa[le];
vector<pair<int, int> > v[le];
int mst(int s){
  pa[s].co = 0;
  pa[s].p = a;
  priority_queue<pair<int, int> > q;
  q.push(make_pair(0, s));
  while(!q.empty()){
    pair<int, int> u = q.top();
    q.pop();
    int xy = u.second;
    if(vis[xy] == true) continue;
    vis[xy] = true;
    for(int i = 0; i < v[xy].size(); i++){
      int y = v[xy][i];
      if(vis[y] == false){
        q.push(v[xy][i]);
        pa[] =
      }
    }
  }
}
int main(){
  while(scanf("%d %d", &n, &m) != EOF && n){
    for(int i = 0; i < m; i++){
      scanf("%d %d %d", &a, &b, &c);
      v[a].push_back(make_pair(c, b));
      v[b].push_back(make_pair(c, a));
    }
    scanf("%d %d %d", &a, &b, &c);
    int mm = mst(a);
  }
  return 0;
}
