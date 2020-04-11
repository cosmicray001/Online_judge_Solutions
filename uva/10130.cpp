#include <bits/stdc++.h>
#define le 1003
using namespace std;
int dp[le][le], cost[le], val[le];
bool vis[le][le];
int len, cap;
int fnc(int i, int w){
  if(i == len) return 0;
  if(vis[i][w]) return dp[i][w];
  else{
    int x = 0, y = 0;
    x = val[i] + fnc(i + 1, w + cost[i]);
    y = fnc(i + 1, w);
    dp[i][w] = max(x, y);
    vis[i][w] = true;
    return dp[i][w];
  }
}
int main(){
  freopen("input.txt", "r", stdin);
  int t, g;
  for(scanf("%d", &t); t--; ){
    for(int i = 0; i < le; i++) for(int j = 0; j < len; vis[i][j] = false, dp[i][j] = 0, j++);
    scanf("%d", &len);
    for(int i = 0; i < len; scanf("%d %d", &val[i], &cost[i]), i++);
    int ans = 0;
    scanf("%d", &g);
    while(g--){
      scanf("%d", &cap);
      ans += dp[][cap];
    }
    printf("%d\n", ans);
  }
  return 0;
}
