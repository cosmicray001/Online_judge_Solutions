#include <bits/stdc++.h>
#define le 1003
using namespace std;
char n[le][le];
int dis[le][le];
bool vis[le][le];
int fx[] = {1, -1, 0, 0}, fy[] = {0, 0, -1, 1};
vector<pair<int, int> > ss;
void mbfs(int r, int c){
  for(int i = 0; i < le; i++) for(int j = 0; j < le; dis[i][j] = INT_MAX, j++);
  queue<pair<int, int> > q;
  for(int i = 0; i < ss.size(); i++){
    int py = ss[i].first, px = ss[i].second;
    dis[py][px] = 0;
    q.push(make_pair(py, px));
  }
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int py = p.first + fy[i], px = p.second + fx[i];
      int w = dis[p.first][p.second] + 1;
      if(py >= 0 && py < r && px >= 0 && px < c && dis[py][px] > w && n[py][px] != '#'){
        dis[py][px] = w;
        q.push(make_pair(py, px));
      }
    }
  }
}
int len[le][le];
void scape_bfs(int a, int b, int r, int c){
  for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, len[i][j] = 0, j++);
  dis[a][b] = 0;
  vis[a][b] = true;
  if(a == 0 || a == r - 1 || b == 0 || b == c - 1){
    printf("%d\n", len[a][b] + 1);
    return;
  }
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int py = p.first + fy[i], px = p.second + fx[i];
      int w = len[p.first][p.second] + 1;
      if(py >= 0 && py < r && px >= 0 && px < c && vis[py][px] == false && w < dis[py][px] && n[py][px] != '#'){
        len[py][px] = w;
        vis[py][px] = true;
        if(py == 0 || py == r - 1 || px == 0 || px == c - 1){
          printf("%d\n", len[py][px] + 1);
          return;
        }
        q.push(make_pair(py, px));
      }
    }
  }
  printf("IMPOSSIBLE\n");
  return;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, r, c, x, y;
  string s;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &r, &c);
    for(int i = 0; i < r; i++){
      cin >> s;
      for(int j = 0; j < c; j++){
        n[i][j] = s[j];
        if(s[j] == 'F') ss.push_back(make_pair(i, j));
        else if(s[j] == 'J'){
          x = j;
          y = i;
        }
      }
    }
    mbfs(r, c);
    scape_bfs(y, x, r, c);
    ss.clear();
  }
}
