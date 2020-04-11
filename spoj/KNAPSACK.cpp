#include <bits/stdc++.h>
#define le 2003
using namespace std;
int val[le], cost[le], cap, dp[le][le], len;
int fnc(int i, int w){
  if(i == len) return 0;
  if(dp[i][w] != 0) return dp[i][w];
  int pro = 0;
  if(cost[i] + w <= cap) pro = val[i] + fnc(i + 1, w + cost[i]);
  int pro1 = fnc(i + 1, w);
  return dp[i][w] = max(pro, pro1);
}
int main(){
  //freopen("input.txt", "r", stdin);
  scanf("%d %d", &cap, &len);
  for(int i = 0; i < len; scanf("%d %d", &cost[i], &val[i]), i++);
  printf("%d\n", fnc(0, 0));
  return 0;
}
