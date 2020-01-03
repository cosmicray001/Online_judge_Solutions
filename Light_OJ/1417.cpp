#include <bits/stdc++.h>
#define le 50004
using namespace std;
vector <int> v[le];
bool ck[le], vis[le];
int bfs(int a){
  memset(vis, false, sizeof(vis));
  vis[a] = ck[a] = true;
  int ans = 1;
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    int p = q.front();
    q.pop();
    for(int i = 0; i < v[p].size(); i++){
      int e = v[p][i];
      if(!vis[e]){
        vis[e] = true;
        ck[e] = true;
        ans++;
        q.push(e);
      }
    }
  }
  return ans;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, len, a, b;
  for(scanf("%d", &t); t--; ){
    memset(ck, false, sizeof(ck));
    scanf("%d", &len);
    for(int i = 0; i < len; i++){
      scanf("%d %d", &a, &b);
      v[a].push_back(b);
    }
    int ans = -INT_MAX, x = -INT_MAX;
    for(int i = 1; i < len + 1; i++){
      if(!ck[i]){
        int ve = bfs(i);
        if(ve > ans){
          ans = ve;
          x = i;
        }
      }
    }
    printf("Case %d: %d\n", ++co, x);
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
