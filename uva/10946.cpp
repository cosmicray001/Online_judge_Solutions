#include <bits/stdc++.h>
#define le 52
using namespace std;
char n[le][le];
int arr[200], fx[] = {1, -1, 0, 0}, fy[] = {0, 0, 1, -1};
bool vis[le][le];
vector<pair<int, int> > v, w;
bool comp(pair<int, int> a, pair<int, int> b){
  if(a.second == b.second) return a.first < b.first;
  return a.second > b.second;
}
int bfs(int a, int b, int r, int c){
  vis[a][b] = true;
  int ans = 1;
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int py = p.first + fy[i], px = p.second + fx[i];
      if(py >= 0 && py < r && px >= 0 && px < c && vis[py][px] == false && n[py][px] == n[a][b]){
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
  int r, c, co = 0;
  string s;
  while(scanf("%d %d", &r, &c) != EOF && (r || c)){
    for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, j++);
    for(int i = 0; i < r; i++){
      cin >> s;
      for(int j = 0; j < c; j++){
        n[i][j] = s[j];
        if(s[j] != '.') v.push_back(make_pair(i, j));
      }
    }
    for(int i = 0; i < v.size(); i++){
      int py = v[i].first, px = v[i].second;
      if(vis[py][px] == false) w.push_back(make_pair(n[py][px], bfs(py, px, r, c)));
    }
    sort(w.begin(), w.end(), comp);
    printf("Problem %d:\n", ++co);
    for(int i = 0; i < w.size(); i++) printf("%c %d\n", w[i].first, w[i].second);
    v.clear();
    w.clear();
  }
  return 0;
}
