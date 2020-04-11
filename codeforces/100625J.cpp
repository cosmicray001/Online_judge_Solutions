#include <bits/stdc++.h>
#define le 102
using namespace std;
char n[le][le], pa[le][le];
int ans, dis[le][le];
bool vis[le][le];
int fx[] = {1, -1, 0, 0}, fy[] = {0, 0, 1, -1};
int bfs(int a, int b, int r, int c){
  for(int i = 0; i < r; i++) for(int j = 0; j < c; vis[i][j] = false, pa[i][j] = n[i][j], dis[i][j] = 0, j++);
  vis[a][b] = true;
  pa[a][b] = n[a][b];
  dis[a][b] = 0;
  deque<pair<int, int> > de;
  de.push_back(make_pair(a, b));
  while(!de.empty()){
    pair<int, int> p = de.front();
    de.pop_back();
    int a = p.first, b = p.second;
    for(int i = 0; i < 4; i++){
      int px = b + fx[i], py = a + fy[i];
      if(py >= 0 && py < r && px >= 0 && px < c && vis[py][px] == false && n[py][px] != '*'){
        vis[py][px] = true;
        if(n[py][px] == '#'){
          dis[py][px] = 1 + dis[a][b];
          de.push_back(make_pair(py, px));
        }
        else{
          dis[py][px] = dis[a][b];
          de.push_front(make_pair(py, px));
        }
        if(py == 0 || py == r - 1 || px == 0 || px == c - 1) return dis[py][px];
      }
    }
  }
  return 0;
}
int main(){
  int t, r, c;
  string s;
  vector<pair<int, int> > pnt;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &r, &c);
    for(int i = 0; i < r; i++){
      cin >> s;
      for(int j = 0; j < c; j++){
        n[i][j] = s[j];
        if(s[j] == '$') pnt.push_back(make_pair(i, j));
      }
    }
    ans = 0;
    for(int i = 0; i < pnt.size(); i++){
      int a = pnt[i].first, b = pnt[i].second;
      if(!eck[a][b]) ans += bfs(a, b, r, c);
    }
    printf("%d\n", ans);
    pnt.clear();
  }
}
