#include <bits/stdc++.h>
#define le 102
using namespace std;
int n[le], m[le], a, b;
bool vis[le][le];
int dis[le][le];
int fnc(int i, int j){
  if(i == a || j == b) return 0;
  if(vis[i][j]) return dis[i][j];
  else{
    int ans = 0;
    if(n[i] == m[j]) ans = 1 + fnc(i + 1, j + 1);
    else ans = max(fnc(i + 1, j), fnc(i, j + 1));
    dis[i][j] = ans;
    vis[i][j] = true;
    return ans;
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int co = 0;
  while(scanf("%d %d", &a, &b) != EOF && (a || b)){
    for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, j++);
    for(int i = 0; i < a; scanf("%d", &n[i]), i++);
    for(int i = 0; i < b; scanf("%d", &m[i]), i++);
    printf("Twin Towers #%d\nNumber of Tiles : %d\n\n", ++co, fnc(0, 0));
  }
  return 0;
}
