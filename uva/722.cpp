#include <bits/stdc++.h>
#define le 102
using namespace std;
int n[le][le], fx[] = {1, -1, 0, 0}, fy[] = {0, 0, 1, -1};
bool vis[le][le];
int bfs(int a, int b, int r, int c){
  for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, j++);
  vis[a][b] = true;
  int ans = 1;
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int py = p.first + fy[i], px = p.second + fx[i];
      if(py >= 0 & py < r && px >= 0 && px < c && vis[py][px] == false && n[py][px] == 0){
        vis[py][px] = true;
        ans++;
        q.push(make_pair(py, px));
      }
    }
  }
  return ans;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, a, b, r, c;
  string s;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &a, &b);
    getchar();
    r = c = 0;
    while(getline(cin, s) && s.size() > 0){
      c = s.size();
      for(int i = 0; i < s.size(); i++){
        n[r][i] = s[i] - '0';
      }
      r++;
    }
    printf("%d\n", bfs(a - 1, b - 1, r, c));
    if(t) printf("\n");
  }
  return 0;
}
