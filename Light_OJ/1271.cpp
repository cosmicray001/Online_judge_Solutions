#include <bits/stdc++.h>
#define le 50004
using namespace std;
vector<int> v[le];
int n[le], p[le], dis[le];
void bfs(int a, int b){
  for(int i = 0; i < le; p[i] = -1, dis[i] = INT_MAX, i++);
  p[a] = a;
  dis[a] = 0;
  priority_queue<int, vector<int>, greater<int> > q;
  q.push(a);
  while(!q.empty()){
    int n = q.top();
    q.pop();
    for(int i = 0; i < v[n].size(); i++){
      int y = v[n][i];
      if(dis[y] > dis[n] + 1){
        dis[y] = dis[n] + 1;
        p[y] = n;
        if(y == b) break;
        q.push(y);
      }
    }
  }
}
void pri(int a){
  if(p[a] == a){
    printf("%d", a);
    return;
  }
  pri(p[a]);
  printf(" %d", a);
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, len, a, b;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &len);
    for(int i = 0; i < len; scanf("%d", &n[i]), i++);
    for(int i = 1; i < len; i++){
      a = n[i];
      b = n[i - 1];
      v[a].push_back(b);
      v[b].push_back(a);
    }
    printf("Case %d:\n", ++co);
    bfs(n[0], n[len - 1]);
    pri(n[len - 1]);
    printf("\n");
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
