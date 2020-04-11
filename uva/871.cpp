#include <bits/stdc++.h>
#define le 27
using namespace std;
vector<pair<int, int> > v;
char n[le][le];
bool vis[le][le];
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
int bfs(int a, int b, int r, int c){
  vis[a][b] = true;
  int ans = 1;
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 8; i++){
      int py = p.first + fy[i], px = p.second + fx[i];
      if(py >= 0 && py < r && px >= 0 && px < c && vis[py][px] == false && n[py][px] == '1'){
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
  int t, r, c;
  string s;
  for(scanf("%d", &t), getline(cin, s), getline(cin, s); t--; ){
    r = c = 0;
    for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, j++);
    while(getline(cin, s) && s.size() > 0){
      c = s.size();
      for(int i = 0; i < c; i++){
        n[r][i] = s[i];
        if(s[i] == '1') v.push_back(make_pair(r, i));
      }
      r++;
    }
    int ans = 0;
    for(int i = 0; i < v.size(); i++){
      int py = v[i].first, px = v[i].second;
      //printf("%d %d -->\n", py, px);
      if(!vis[py][px]) ans = max(ans, bfs(py, px, r, c));
    }
    printf("%d\n", ans);
    if(t) printf("\n");
    v.clear();
  }
  return 0;
}
