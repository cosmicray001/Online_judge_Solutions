#include <bits/stdc++.h>
#define le 102
using namespace std;
int r, c;
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
bool n[le][le], ck[le][le], vis[le][le];
vector<pair<int, int> > v;
void bfs(int a, int b){
  for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, j++);
  vis[a][b] = true;
  ck[a][b] = true;
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 8; i++){
      int pa = p.first + fy[i];
      int pb = p.second + fx[i];
      if(pa >= 0 && pa < r && pb >= 0 && pb < c && n[pa][pb] == false && vis[pa][pb] == false){
        vis[pa][pb] = true;
        ck[pa][pb] = true;
        q.push(make_pair(pa, pb));
      }
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int a, b;
  char ch[le];
  while(scanf("%d %d", &r, &c) != EOF && r){
    for(int i = 0; i < r; i++){
      scanf("%s", ch);
      for(int j = 0; j < c; j++){
        if(ch[j] == '@'){
          n[i][j] = false;
          v.push_back(make_pair(i, j));
        }
        else n[i][j] = true;
      }
    }
    int ans = 0;
    for(int i = 0; i < le; i++) for(int j = 0; j < le; ck[i][j] = false, j++);
    for(int i = 0; i < v.size(); i++){
      if(ck[v[i].first][v[i].second] == false){
        ans++;
        bfs(v[i].first, v[i].second);
      }
    }
    printf("%d\n", ans);
    v.clear();
  }
  return 0;
}
