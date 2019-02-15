#include <bits/stdc++.h>
#define le 52
using namespace std;
int n[le][le];
bool vis[le][le];
int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, 1, -1};
int bfs(pair<int, int> a, int r, int c){
  for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, j++);
  vis[a.first][a.second] = true;
  int co = 0;
  queue<pair<int, int> > q;
  q.push(a);
  while(!q.empty()){
    a = q.front();
    q.pop();
    if(n[a.first][a.second] == 1){
      co++;
      n[a.first][a.second] = -1;
    }
    for(int i = 0; i < 4; i++){
      int px = a.second + fx[i];
      int py = a.first + fy[i];
      if(px >= 0 && px < c && py >= 0 && py < r && n[py][px] != -1 && vis[py][px] == false){
        vis[py][px] = true;
        q.push(make_pair(py, px));
      }
    }
  }
  return co;
}
int main(){
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int r, c;
  string s;
  while(scanf("%d %d", &c, &r) != EOF && (c || r)){
    pair<int, int> p;
    for(int i = 0; i < r; i++){
      cin >> s;
      for(int j = 0; j < c; j++){
        if(s[j] == '#' || s[j] == 'T') n[i][j] = -1;
        else if(s[j] == 'G') n[i][j] = 1;
        else if(s[j] == 'P'){
          n[i][j] = 0;
          p = make_pair(i, j);
        }
        else n[i][j] = 0;
        printf("%3d", n[i][j]);
      }
      printf("\n");
    }
    printf("%d\n%d %d\n", bfs(p, r, c), p.first, p.second);
  }
  return 0;
}
