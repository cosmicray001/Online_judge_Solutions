#include <bits/stdc++.h>
#define le 32
using namespace std;
int l, r, c;
char n[le][le][le];
int fx[] = {1, -1, 0, 0, 1, -1};
int fy[] = {0, 0, 1, -1};
struct po{
  int x, y, z;
};
bool vis[le][le][le];
int dis[le][le][le];
void bfs(int z, int y, int x){
  for(int k = 0; k < le; k++) for(int i = 0; i < le; i++) for(int j = 0; j < le; dis[k][i][j] = 0, vis[k][i][j] = false, j++);
  dis[z][y][x] = 0;
  vis[z][y][x] = true;
  queue<pair<int, pair<int, int> > > q;
  q.push(make_pair(z, make_pair(y, x)));
  while(!q.empty()){
    pair<int, pair<int, int> > p = q.front();
    q.pop();
    for(int i = 0; i < 6; i++){
      int pz, py, px;
      if(i < 4){
        py = p.second.first + fy[i];
        px = p.second.second + fx[i];
      }
      else{
        py = p.second.first;
        px = p.second.second;
      }
      if(i >= 4) pz = p.first + fx[i];
      else pz = p.first;
      if(pz >= 0 && pz < l && py >= 0 && py < r && px >= 0 && px < c && n[pz][py][px] != '#' && vis[pz][py][px] == false){
        vis[pz][py][px] = true;
        dis[pz][py][px] = dis[p.first][p.second.first][p.second.second] + 1;
        q.push(make_pair(pz, make_pair(py, px)));
      }
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  string s;
  while(scanf("%d %d %d", &l, &r, &c) != EOF && (l || r || c)){
    po ss, dd;
    for(int k = 0; k < l; k++){
      for(int i = 0; i < r; i++){
        cin >> s;
        for(int j = 0; j < c; j++){
          if(s[j] == 'S'){
            ss.x = j;
            ss.y = i;
            ss.z = k;
          }
          else if(s[j] == 'E'){
            dd.x = j;
            dd.y = i;
            dd.z = k;
          }
          n[k][i][j] = s[j];
        }
      }
    }
    bfs(ss.z, ss.y, ss.x);
    if(!vis[dd.z][dd.y][dd.x]) printf("Trapped!\n");
    else printf("Escaped in %d minute(s).\n", dis[dd.z][dd.y][dd.x]);
  }
  return 0;
}
