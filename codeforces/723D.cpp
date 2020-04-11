#include <bits/stdc++.h>
#define le 55
using namespace std;
char n[le][le];
bool vis[le][le], ck[le][le];
vector<pair<int, int> > v;
vector<pair<int, pair<int, int> > > ans;
int lo, fx[] = {1, -1, 0, 0}, fy[] = {0, 0, 1, -1};
bool comp(pair<int, pair<int, int> > a, pair<int, pair<int, int> > b){
  if(a.second.second == b.second.second) return a.first < b.first;
  return a.second.second < b.second.second;
}
bool bfs(int a, int b, int r, int c){
  vis[a][b] = true;
  lo = 0;
  bool f = true;
  if(a == 0 || a == r - 1 || b == 0 || b == c - 1) f = false;
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int py = p.first + fy[i], px = p.second + fx[i];
      if(py >= 0 && py < r && px >= 0 && px < c && vis[py][px] == false && n[py][px] == '.'){
        vis[py][px] = true;
        if(py == 0 || py == r - 1 || px == 0 || px == c - 1) f = false;
        lo++;
        q.push(make_pair(py, px));
      }
    }
  }
  return f;
}
void bfs1(int a, int b, int r, int c){
  ck[a][b] = true;
  n[a][b] = '*';
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int py = p.first + fy[i], px = p.second + fx[i];
      if(py >= 0 && py < r && px >= 0 && px < c && ck[py][px] == false && n[py][px] == '.'){
        ck[py][px] = true;
        n[py][px] = '*';
        q.push(make_pair(py, px));
      }
    }
  }
}
int main(){
  freopen("input.txt", "r", stdin);
  int r, c, k, a, b;
  string s;
  scanf("%d %d %d", &r, &c, &k);
  for(int i= 0; i < r; i++){
    cin >> s;
    for(int j = 0; j < c; j++){
      n[i][j] = s[j];
      if(s[j] == '.') v.push_back(make_pair(i, j));
    }
  }
  for(int i = 0; i < v.size(); i++){
    a = v[i].first;
    b = v[i].second;
    if(!vis[a][b] && bfs(a, b, r, c)) ans.push_back(make_pair(a, make_pair(b, lo)));
  }
  sort(ans.begin(), ans.end(), comp);
  for(int i = 0; i < ans.size() - k; i++){
    a = ans[i].first;
    b = ans[i].second.first;
    //cout << a << " " << b << endl;
    if(!ck[a][b]) bfs1(a, b, r, c);
  }
  printf("%d\n", ans.size() - k);
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      printf("%c", n[i][j]);
    }
    printf("\n");
  }
  return 0;
}
