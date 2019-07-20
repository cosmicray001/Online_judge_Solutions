#include <bits/stdc++.h>
#define le 12
using namespace std;
char n[le][le];
struct edge{
  int y, x;
  char ch;
};
bool comp(edge a, edge b){
  return a.ch < b.ch;
}
int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, 1, -1};
int dis[le][le];
bool vis[le][le];
void bfs(char cc, int a, int b, int len){
  for(int i = 0; i < le; i++) for(int j = 0; j < le; dis[i][j] = 0, vis[i][j] = false, j++);
  dis[a][b] = 0;
  vis[a][b] = true;
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int py = p.first + fy[i];
      int px = p.second + fx[i];
      if(px >= 0 && px < len && py >= 0 && py < len && vis[py][px] == false && n[py][px] != '#' && n[py][px] <= cc){
        vis[py][px] = true;
        dis[py][px] = dis[p.first][p.second] + 1;
        q.push(make_pair(py, px));
      }
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, len, co = 0;
  char ch;
  string s;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &len);
    getchar();
    vector<edge> v;
    edge eg;
    for(int i = 0; i < len; i++){
      cin >> s;
      for(int j = 0; j < len; j++){
        n[i][j] = s[j];
        if(s[j] >= 'A' && s[j] <= 'Z'){
          eg.y = i;
          eg.x = j;
          eg.ch = s[j];
          v.push_back(eg);
        }
      }
    }
    sort(v.begin(), v.end(), comp);
    int ans = 0;
    bool f = true;
    for(int i = 0; i < v.size() - 1; i++){
      bfs(v[i + 1].ch, v[i].y, v[i].x, len);
      if(!vis[v[i + 1].y][v[i + 1].x]){
        f = false;
        break;
      }
      else ans += dis[v[i + 1].y][v[i + 1].x];
    }
    if(f) printf("Case %d: %d\n", ++co, ans);
    else printf("Case %d: Impossible\n", ++co);
  }
  return 0;
}
