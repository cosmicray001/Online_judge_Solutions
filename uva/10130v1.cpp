#include <bits/stdc++.h>
#define le 1003
#define la 10004
using namespace std;
int val[le], cost[le], cap, dp[le][la], len, q;
bool vis[le][la];
int fnc(int i, int w){
  if(i == len) return 0;
  if(vis[i][w]) return dp[i][w];
  int pro = 0, pro1;
  if(cost[i] + w <= cap) pro = val[i] + fnc(i + 1, w + cost[i]);
  pro1 = fnc(i + 1, w);
  vis[i][w] = true;
  return dp[i][w] = max(pro, pro1);
}
int main(){
  //freopen("input.txt", "r", stdin);
  int t;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &len);
    for(int i = 0; i < len; scanf("%d %d", &val[i], &cost[i]), i++);
    scanf("%d", &q);
    int ans = 0;
    while(q--){
      memset(vis, false, sizeof(vis));
      scanf("%d", &cap);
      ans += fnc(0, 0);
    }
    printf("%d\n", ans);
  }
  return 0;
}
