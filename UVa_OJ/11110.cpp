#include <bits/stdc++.h>
#define le 102
using namespace std;
int n[le][le], fx[] = {1, -1, 0, 0}, fy[] = {0, 0, 1, -1};
bool vis[le][le];
int bfs(int a, int b, int r){
  int ans = 1;
  vis[a][b] = true;
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int px = p.second + fx[i], py = p.first + fy[i];
      if(py >= 0 && py < r && px >= 0 && px < r && vis[py][px] == false && n[py][px] == n[a][b]){
        vis[py][px] = true;
        ans++;
        q.push(make_pair(py, px));
      }
    }
  }
  return ans;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int len, a, b;
  string s;
  while(scanf("%d", &len) != EOF && len){
    for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, j++);
    getchar();
    for(int i = 0; i < len; i++) for(int j = 0; j < len; n[i][j] = len - 1, j++);
    for(int i = 0; i < len - 1; i++){
      getline(cin, s);
      stringstream ss(s);
      while(ss >> a >> b) n[a - 1][b - 1] = i;
    }
    bool f = true;
    for(int i = 0; i < len; i++){
      for(int j = 0; j < len; j++){
        if(vis[i][j] == false){
          if(bfs(i, j, len) != len){ f = false; break;}
        }
      }
    }
    printf("%s\n", f ? "good" : "wrong");
  }
  return 0;
}
