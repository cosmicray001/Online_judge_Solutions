#include <bits/stdc++.h>
#define le 1003
using namespace std;
int fx[] = {1, 2, 2, 1, -1, -2, -2, -1}, fy[] = {2, 1, -1, -2, -2, -1, 1, 2}, len[le][le];
bool vis[le][le];
void bfs(){
  vis[1][1] = true;
  queue<pair<int, int> > q;
  q.push(pair<int, int>(1, 1));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 8; i++){
      int px = p.first + fx[i];
      int py = p.second + fy[i];
      if(px > 0 && px <= 1000 && py > 0 && py <= 1000 && vis[py][px] == false){
        len[py][px] = len[p.second][p.first] + 1;
        vis[py][px] = true;
        q.push(pair<int, int>(px, py));
      }
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, a, b;
  bfs();
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &a, &b);
    printf("%d\n", len[a][b]);
  }
  return 0;
}
