#include <bits/stdc++.h>
#define le 52
using namespace std;
char n[le][le];
bool vis[le][le], pe[le][le];
int fx[] = {1, -1, 0, 0}, fy[] = {0, 0, 1, -1};
void fnc(int a, int b, int r, int c){
  for(int i = 0; i < 4; i++){
    int py = a + fy[i], px = fx[i] + b;
    if(py >= 0 && py < r && px >= 0 && px < c) pe[py][px] = true;
  }
}
int bfs(int a, int b, int r, int c){
  vis[a][b] = true;
  int ans = 0;
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int py = p.first + fy[i], px = p.second + fx[i];
      if(py >= 0 && py < r && px >= 0 && px < c && vis[py][px] == false && (n[py][px] == '.' || n[py][px] == 'G')){
        vis[py][px] = true;
        if(n[py][px] == 'G') ans++;
        if(pe[py][px] == false) q.push(make_pair(py, px));
      }
    }
  }
  return ans;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int r, c, a, b;
  string s;
  while(scanf("%d %d", &c, &r) != EOF){
    for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, pe[i][j] = false, j++);
    for(int i = 0; i < r; i++){
      cin >> s;
      for(int j = 0; j < c; j++){
        n[i][j] = s[j];
        if(s[j] == 'P'){
          a = i;
          b = j;
        }
        if(s[j] == 'T') fnc(i, j, r, c);
      }
    }
    if(pe[a][b] == true) printf("0\n");
    else printf("%d\n", bfs(a, b, r, c));
  }
  return 0;
}
