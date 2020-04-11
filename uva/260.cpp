#include <bits/stdc++.h>
#define le 202
using namespace std;
char n[le][le];
bool vis[le][le];
int fx[] = {-1, 0, -1, 1, 0, 1};
int fy[] = {-1, -1, 0, 0, 1, 1};
bool bfs(int a, int b, int r, int c){
  for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, j++);
  vis[a][b] = true;
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 6; i++){
      int py = p.first + fy[i], px = p.second + fx[i];
      if(py >= 0 && py < r && px >= 0 && px < c && vis[py][px] == false && n[py][px] == n[a][b]){
        vis[py][px] = true;
        if(n[a][b] == 'b' && py == r - 1) return true;
        else if(n[a][b] == 'w' && px == c - 1) return true;
        q.push(make_pair(py, px));
      }
    }
  }
  return false;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int r, co = 0;
  string s;
  while(scanf("%d", &r) != EOF && r){
    for(int i = 0; i < r; i++){
      cin >> s;
      for(int j = 0; j < r; j++) n[i][j] = s[j];
    }
    bool f = false;
    for(int i = 0; i < r; i++) if(n[0][i] == 'b'){
      if(bfs(0, i, r, r)){
        printf("%d B\n", ++co);
        f = true;
        break;
      }
    }
    if(!f){
      for(int i = 0; i < r; i++) if(n[i][0] == 'w'){
        if(bfs(i, 0, r, r)){
          printf("%d W\n", ++co);
          break;
        }
      }
    }
  }
  return 0;
}
