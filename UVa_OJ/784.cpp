#include <bits/stdc++.h>
#define le 82
using namespace std;
vector<char> v[le];
int r;
int fx[] = {1, -1, 0, 0}, fy[] = {0, 0, 1, -1};
bool vis[le][le];
void bfs(int a, int b){
  vis[a][b] = true;
  v[a][b] = '#';
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int py = p.first + fy[i], px = p.second + fx[i];
      if(py >= 0 && py < r && px >= 0 && px < v[py].size() && vis[py][px] == false && v[py][px] == ' '){
        vis[py][px] = true;
        v[py][px] = '#';
        q.push(make_pair(py, px));
      }
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, a, b;
  string s;
  for(scanf("%d", &t), getchar(); t--; ){
    for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, j++);
    for(int i = 0; ; i++){
      r = i;
      getline(cin, s);
      if(s[0] == '_'){
        bfs(a, b);
        for(int i = 0; i < r; i++){
          for(int j = 0; j < v[i].size(); j++){
            printf("%c", v[i][j]);
          }
          printf("\n");
        }
        cout << s << endl;
        break;
      }
      else{
        for(int j = 0; j < s.size(); j++){
          v[i].push_back(s[j]);
          if(s[j] == '*'){
            a = i;
            b = j;
          }
        }
      }
    }
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
