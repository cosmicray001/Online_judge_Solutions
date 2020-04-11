#include <bits/stdc++.h>
#define le 2003
using namespace std;
int dp[le][le];
bool vis[le][le];
string a, b;
int fnc(int i, int j){
  if(i == a.size() || j == b.size()){
    return abs(i - j);
  }
  if(vis[i][j]) return dp[i][j];
  else{
    int v1 = 1 + fnc(i + 1, j);
    int v2 = 1 + fnc(i + 1, j + 1);
    int v3 = 1 + fnc(i, j + 1);
    dp[i][j] = min(v1, min(v2, v3));
    vis[i][j] = true;
    return dp[i][j];
  }
}
int main(){
  int t;
  for(scanf("%d", &t); t--; ){
    cin >> a >> b;
    for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, j++);
    printf("%d\n", fnc(0, 0));
  }
  return 0;
}
