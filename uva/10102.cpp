#include <bits/stdc++.h>
#define le 106
using namespace std;
int n[le][le];
vector<pair<int, int> > v;
bool vis[le][le];
int fx[] = {1, -1, 0, 0}, fy[] = {0, 0, 1, -1}, dis[le][le];
int bfs(int a, int b, int r, int c){
  for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, dis[i][j] = 0, j++);
  vis[a][b] = true;
  dis[a][b] = 0;
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int py = fy[i] + p.first, px = fx[i] + p.second;
      if(py >= 0 && py < r && px >= 0 && px < c && vis[py][px] == false){
        vis[py][px] = true;
        dis[py][px] = dis[p.first][p.second] + 1;
        if(n[py][px] == 3) return dis[py][px];
        q.push(make_pair(py, px));
      }
    }
  }
  return 0;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int r, a;
  string s;
  while(scanf("%d", &r) != EOF){
    for(int i = 0; i < r; i++){
      cin >> s;
      for(int j = 0; j < r; j++){
        a = s[j] - '0';
        n[i][j] = a;
        if(a == 1) v.push_back(make_pair(i, j));
      }
    }
    a = 0;
    for(int i = 0; i < v.size(); i++) a = max(a, bfs(v[i].first, v[i].second, r, r));
    printf("%d\n", a);
    v.clear();
  }
  return 0;
}
