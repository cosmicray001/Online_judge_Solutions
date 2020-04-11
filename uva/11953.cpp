#include <bits/stdc++.h>
#define le 102
using namespace std;
char n[le][le];
bool vis[le][le];
int fx[] = {1, -1, 0, 0}, fy[] = {0, 0, 1, -1};
vector<pair<int, int> > v;
void bfs(int a, int b, int r){
  vis[a][b] = true;
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int py = p.first + fy[i], px = p.second + fx[i];
      if(py >= 0 && py < r && px >= 0 && px < r && vis[py][px] == false && (n[py][px] == 'x' || n[py][px] == '@')){
        vis[py][px] = true;
        q.push(make_pair(py, px));
      }
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, r;
  string s;
  for(scanf("%d", &t); t--; ){
    for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, j++);
    scanf("%d", &r);
    for(int i = 0; i < r; i++){
      cin >> s;
      for(int j = 0; j < r; j++){
        n[i][j] = s[j];
        if(s[j] == 'x') v.push_back(make_pair(i, j));
      }
    }
    int ans = 0;
    for(int i = 0; i < v.size(); i++){
      int py = v[i].first, px = v[i].second;
      if(!vis[py][px]){
        bfs(py, px, r);
        ans++;
      }
    }
    printf("Case %d: %d\n", ++co, ans);
    v.clear();
  }
  return 0;
}
