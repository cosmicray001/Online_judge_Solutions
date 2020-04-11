#include <bits/stdc++.h>
#define le 10
using namespace std;
int fx[] = {1, 2, 2, 1, -1, -2, -2, -1}, fy[] = {2, 1, -1, -2, -2, -1, 1, 2}, len[le][le];
bool vis[le][le];
void bfs(int x, int y){
  for(int i = 0; i < 10; i++) for(int j = 0; j < 10; vis[i][j] = 0, len[i][j] = 0, j++);
  vis[y][x] = true;
  queue<pair<int, int> > q;
  q.push(pair<int, int>(x, y));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 8; i++){
      int px = p.first + fx[i];
      int py = p.second + fy[i];
      if(px >= 0 && px < 8 && py >= 0 && py < 8 && vis[py][px] == false){
        len[py][px] = len[p.second][p.first] + 1;
        vis[py][px] = true;
        q.push(pair<int, int>(px, py));
      }
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  int t, y, b;
  char x[3], a[3];
  for(scanf("%d", &t); t--; ){
    scanf("%s %s", x, a);
    bfs(x[0] - 'a', x[1] - '1');
    printf("%d\n", len[a[1] - '1'][a[0] - 'a']);
  }
  return 0;
}
