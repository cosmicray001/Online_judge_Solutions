#include <bits/stdc++.h>
#define le 1003
using namespace std;
int fx[] = {1, -1, 0, 0}, fy[] = {0, 0, 1, -1}, len[le][le];
bool n[le][le], vis[le][le];
int bfs(int x, int y, int x1, int y1, int r, int c){
  for(int i = 0; i < r; i++) for(int j = 0; j < c; vis[i][j] = false, len[i][j] = 0, j++);
  vis[y][x] = true;
  len[y][x] = 0;
  queue<pair<int, int> > q;
  q.push(pair<int, int>(x, y));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int px = p.first + fx[i], py = p.second + fy[i];
      if(px >= 0 && px < c && py >= 0 && py < r && vis[py][px] == false && n[py][px] == false){
        vis[py][px] = true;
        len[py][px] = len[p.second][p.first] + 1;
        q.push(pair<int, int>(px, py));
      }
    }
  }
  return len[y1][x1];
}
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int r, c, a, b, x, y, x1, y1, w, t;
  while(scanf("%d %d", &r, &c) != EOF && r && c){
    for(int i = 0; i < r; i++) for(int j = 0; j < c; n[i][j] = false, j++);
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
      scanf("%d %d", &w, &a);
      while(a--){
        scanf("%d", &b);
        n[w][b] = true;
      }
    }
    scanf("%d %d %d %d", &y, &x, &y1, &x1);
    printf("%d\n", bfs(x, y, x1, y1, r, c));
  }
  return 0;
}
