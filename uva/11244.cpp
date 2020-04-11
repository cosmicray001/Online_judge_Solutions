#include <bits/stdc++.h>
#define le 102
using namespace std;
bool n[le][le], vis[le][le], ck[le][le];
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
vector<pair<int, int> > v;
bool bfs(int a, int b, int r, int c){
  for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, j++);
  vis[a][b] = true;
  ck[a][b] = true;
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  int co = 0;
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    int x = p.second;
    int y = p.first;
    for(int i = 0; i < 8; i++){
      int px = x + fx[i];
      int py = y + fy[i];
      if(px >= 0 && px < c && py >= 0 && py < r && vis[py][px] == false && n[py][px] == false){
        vis[py][px] = true;
        ck[py][px] = true;
        co++;
        q.push(make_pair(py, px));
      }
    }
  }
  return co;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int r, c;
  string s;
  while(scanf("%d %d", &r, &c) != EOF && (r || c)){
    for(int i = 0; i < r; i++){
      cin >> s;
      for(int j = 0; j < c; j++){
        if(s[j] == '*'){
          v.push_back(make_pair(i, j));
          n[i][j] = false;
        }
        else n[i][j] = true;
      }
    }
    for(int i = 0; i < le; i++) for(int j = 0; j < le; ck[i][j] = false, j++);
    int ans = 0;
    for(int i = 0; i < v.size(); i++){
      int a = v[i].first;
      int b = v[i].second;
      if(!ck[a][b]){
        if(!bfs(a, b, r, c)) ans++;
      }
    }
    printf("%d\n", ans);
    v.clear();
  }
  return 0;
}
