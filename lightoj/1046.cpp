#include <bits/stdc++.h>
#define le 11
using namespace std;
char n[le][le];
vector<pair<int, int> > v;
bool vis[le][le];
int lo, stp, dis[le][le];
int fx[] = {1, 1, -1, -1, 2, -2, 2, -2};
int fy[] = {2, -2, 2, -2, 1, 1, -1, -1};
void bfs(int a, int b, int r, int c){
  for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, dis[i][j] = 0, j++);
  if(n[a][b] != '.') lo = 1;
  else lo = 0;
  stp = 0;
  int ans = 0;
  vis[a][b] = true;
  dis[a][b] = 0;
  if(lo == v.size()) return;
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 8; i++){
      int py = p.first + fy[i], px = p.second + fx[i];
      if(py >= 0 && py < r && px >= 0 && px < c && vis[py][px] == false){
        vis[py][px] = true;
        dis[py][px] = dis[p.first][p.second] + 1;
        if(n[py][px] != '.'){
          int ve = n[py][px] - '0';
          stp += (dis[py][px] / ve);
          if(dis[py][px] % ve != 0) stp++;
          if(++lo == v.size()) return;
        }
        q.push(make_pair(py, px));
      }
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, r, c;
  string s;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &r, &c);
    for(int i = 0; i < r; i++){
      cin >> s;
      for(int j = 0; j < c; j++){
        n[i][j] = s[j];
        if(s[j] != '.') v.push_back(make_pair(i, j));
      }
    }
    int ans = INT_MAX;
    for(int i = 0; i < r; i++){
      for(int j = 0; j < c; j++){
        bfs(i, j, r, c);
        if(lo == v.size()) ans = min(ans, stp);
      }
    }
    if(ans == INT_MAX) ans = -1;
    printf("Case %d: %d\n", ++co, ans);
    v.clear();
  }
  return 0;
}
