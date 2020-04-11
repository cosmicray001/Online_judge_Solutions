#include <bits/stdc++.h>
#define le 102
using namespace std;
char n[le][le];
int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, 1, -1};
bool vis[le][le], ck[le][le];
void bfs(int a, int b, int r, int c){
  ck[a][b] = true;
  char ch = n[a][b];
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int px = p.second + fx[i];
      int py = p.first + fy[i];
      if(px >= 0 && px < c && py >= 0 && py < r && n[py][px] == ch && ck[py][px] == false){
        ck[py][px] = true;
        q.push(make_pair(py, px));
      }
    }
  }
}
bool comp(pair<char, int> a, pair<char, int> b){
  if(a.second == b.second) return (a.first < b.first);
  return (a.second > b.second);
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, r, c, co = 0;
  string s;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &r, &c);
    for(int i = 0; i < r; i++){
      cin >> s;
      for(int j = 0; j < c; j++){
        n[i][j] = s[j];
      }
    }
    for(int i = 0; i < le; i++) for(int j = 0; j < le; ck[i][j] = false, j++);
    map<char, int> mp;
    for(int i = 0; i < r; i++){
      for(int j = 0; j < c; j++){
        if(!ck[i][j]){
          bfs(i, j, r, c);
          mp[n[i][j]]++;
        }
      }
    }
    vector<pair<char, int> > v;
    for(map<char, int> :: iterator it = mp.begin(); it != mp.end(); it++) v.push_back(make_pair((*it).first, (*it).second));
    sort(v.begin(), v.end(), comp);
    printf("World #%d\n", ++co);
    for(int i = 0; i < v.size(); i++){
      printf("%c: %d\n", v[i].first, v[i].second);
    }
  }
  return 0;
}
