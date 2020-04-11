#include <bits/stdc++.h>
#define le 82
using namespace std;
vector<char> v[le];
bool vis[le][le];
vector<pair<int, int> > po;
int r, fx[] = {1, -1, 0, 0}, fy[] = {0, 0, 1, -1};
char ch = ' ';
void bfs(int a, int b){
  vis[a][b] = true;
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int py = p.first + fy[i], px = fx[i] + p.second;
      if(py >= 0 && py < r && px >= 0 && px < v[py].size() && vis[py][px] == false && (v[py][px] == ' ' || v[py][px] == v[a][b])){
        vis[py][px] = true;
        v[py][px] = v[a][b];
        q.push(make_pair(py, px));
      }
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  string s;
  r = -1;
  while(getline(cin, s)){
    r++;
    if(s[0] == '_'){
      for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, j++);
      for(int i = 0; i < po.size(); i++) if(!vis[po[i].first][po[i].second]) bfs(po[i].first, po[i].second);
      for(int i = 0; i < r; i++){
        for(int j = 0; j < v[i].size(); j++) printf("%c", v[i][j]);
        printf("\n");
      }
      cout << s << endl;
      //cout << "------> " << po.size() << endl;
      for(int i = 0; i < le; v[i].clear(), i++);
      po.clear();
      r = -1;
    }
    else{
      for(int i = 0; i < s.size(); i++){
        v[r].push_back(s[i]);
        if(r == 0 && s[i] != ' ') ch = s[i];
        else if(s[i] != ' ' && s[i] != ch) po.push_back(make_pair(r, i));
      }
    }
  }
}
