#include <bits/stdc++.h>
#define le 28
using namespace std;
int p[le];
bool vis[le];
vector<int> v[le];
void dfs(int a){
  vis[a] = true;
  for(int i = 0; i < v[a].size(); i++){
    if(!vis[v[a][i]]) dfs(v[a][i]);
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, n, m, a, b;
  string s;
  for(scanf("%d\n\n", &t); t--; ){
    if(co++) printf("\n");
    getline(cin, s);
    n = s[0] - 'A' + 1;
    while(1){
      if(!getline(cin, s) || s.empty()) break;
      a = s[0] - 'A' + 1;
      b = s[1] - 'A' + 1;
      v[a].push_back(b);
      v[b].push_back(a);
    }
    for(int i = 0; i < le; vis[i] = false, i++);
    int ans = 0;
    for(int i = 1; i < n + 1; i++){
      if(vis[i] == false){
        dfs(i);
        ans++;
      }
    }
    printf("%d\n", ans);
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
