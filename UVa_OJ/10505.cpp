#include <bits/stdc++.h>
#define le 202
using namespace std;
vector<int> v[le];
int main(){
  int t, n, len, a;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &n);
    for(int i = 1; i < n + 1; i++){
      scanf("%d", &len);
      while(len--){
        scanf("%d", &a);
        v[i].push_back(a);
        v[a].push_back(i);
      }
    }
    int ans = 0;
    for(int i = 1; i < n + 1; i++){
      if(!vis[i]) ans = max(ans, bfs())
    }
  }
}
