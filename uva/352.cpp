#include <bits/stdc++.h>
#define le 26
using namespace std;
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
bool n[le][le], ck[le][le], vis[le][le];
vector<pair<int, int> > v;
int nn;
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
      if(pa >= 0 && pa < nn && pb >= 0 && pb < nn && n[pa][pb] == false && vis[pa][pb] == false){
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
  int co = 0;
  while(scanf("%d", &nn) != EOF){
    char ch[le];
    for(int i = 0; i < nn; i++){
      scanf("%s", ch);
      for(int j = 0; j < nn; j++){
        if(ch[j] == '1'){
          n[i][j] = false;
          v.push_back(make_pair(i, j));
        }
        else n[i][j] = true;
      }
    }
    for(int i = 0; i < le; i++) for(int j = 0; j < le; ck[i][j] = false, j++);
    int ans = 0;
    for(int i = 0; i < v.size(); i++){
      if(!ck[v[i].first][v[i].second]){
        ans++;
        bfs(v[i].first, v[i].second);
      }
    }
    printf("Image number %d contains %d war eagles.\n", ++co, ans);
    v.clear();
  }
  return 0;
}
