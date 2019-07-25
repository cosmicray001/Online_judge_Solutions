#include <bits/stdc++.h>
#define le 202
using namespace std;
char n[le][le];
bool vis[le][le];
int dis[le][le];
int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, 1, -1};
vector<pair<int, int> > v;
void bfs(int r, int c){
  if(v.size() == 0){
    for(int i = 0; i < le; i++) for(int j = 0; j < le; dis[i][j] = INT_MAX, j++);
    return;
  }
  for(int i = 0; i < le; i++) for(int j = 0; j < le; dis[i][j] = 0, vis[i][j] = false, j++);
  queue<pair<int, int> > q;
  for(int i = 0; i < v.size(); i++){
    int py = v[i].first, px = v[i].second;
    q.push(make_pair(py, px));
    vis[py][px] = true;
  }
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int py = p.first + fy[i], px = p.second + fx[i];
      if(py >= 0 && py < r && px >= 0 && px < c && vis[py][px] == false && n[py][px] != '#'){
        vis[py][px] = true;
        dis[py][px] = dis[p.first][p.second] + 1;
        q.push(make_pair(py, px));
      }
    }
  }
}
int len[le][le];
int bfs1(int a, int b, int r, int c){
  if(a == 0 || a == r - 1 || b == 0 || b == c - 1) return 1;
  for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, len[i][j] = 0, j++);
  vis[a][b] = true;
  len[a][b] = 0;
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int py = p.first + fy[i], px = p.second + fx[i];
      int w = len[p.first][p.second] + 1;
      if(py >= 0 && py < r && px >= 0 && px < c && vis[py][px] == false && n[py][px] != 'F' && n[py][px] != '#' && w < dis[py][px]){
        vis[py][px] = true;
        len[py][px] = w;
        if((py == 0 || py == r - 1) || (px == 0 || px == c - 1)) return len[py][px] + 1;
        q.push(make_pair(py, px));
      }
    }
  }
  return -1;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, r, c, y, x;
  string s;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &r, &c);
    for(int i = 0; i < r; i++){
      cin >> s;
      for(int j = 0; j < c; j++){
        n[i][j] = s[j];
        if(s[j] == 'J'){
          y = i;
          x = j;
        }
        else if(s[j] == 'F') v.push_back(make_pair(i, j));
      }
    }
    bfs(r, c);
    int ans = bfs1(y, x, r, c);
    if(ans == -1) printf("Case %d: IMPOSSIBLE\n", ++co);
    else printf("Case %d: %d\n", ++co, ans);
    v.clear();
  }
  return 0;
}
