#include <bits/stdc++.h>
#define le 52
using namespace std;
char n[le][le];
int dis[le][le];
bool vis[le][le];
vector<pair<int, int> > v;
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
bool ck(int a, int b, int r, int c){
  if(a >= 0 && a < r && b >= 0 && b < c) return true;
  return false;
}
int dfs(int a, int b, int r, int c){
  for(int i = 0; i < 8; i++){
    int py = a + fy[i], px = b + fx[i];
    if(ck(py, px, r, c) && n[a][b] != 'Z' && n[py][px] == n[a][b] + 1){
      if(vis[py][px]) return dis[py][px];
      else{
        int ve = 1 + dfs(py, px, r, c);
        vis[py][px] = true;
        return dis[py][px] = ve;
      }
    }
  }
  return 0;
}
int main(){
  //freopen("input.txt", "r", stdin);
  int r, c, co = 0;
  string s;
  while(scanf("%d %d", &r, &c) != EOF && (r || c)){
    for(int i = 0; i < r; i++){
      cin >> s;
      for(int j = 0; j < c; j++){
        n[i][j] = s[j];
        if(s[j] == 'A') v.push_back(make_pair(i, j));
      }
    }
    for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, dis[i][j] = 0, j++);
    int ans = 0;
    for(int i = 0; i < v.size(); i++){
      int a = v[i].first, b = v[i].second;
      vis[a][b] = true;
      ans = max(ans, dfs(a, b, r, c) + 1);
    }
    printf("Case %d: %d\n", ++co, ans);
    v.clear();
  }
  return 0;
}
