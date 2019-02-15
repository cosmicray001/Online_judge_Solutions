#include <bits/stdc++.h>
#define le 1003
using namespace std;
int n[le][le], dis[le][le];
int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, 1, -1};
bool vis[le][le];
void dijkstra(int a, int b, int r, int c){
  for(int i = 0; i < le; i++) for(int j = 0; j < le; dis[i][j] = INT_MAX, vis[i][j] = 0, j++);
  priority_queue<pair<int, pair<int, int> >, vector<pair<int, pair<int, int> > >, greater<pair<int, pair<int, int> > > > q;
  q.push(make_pair(0, make_pair(a, b)));
  int sum = 0;
  dis[a][b] = n[a][b];
  while(!q.empty()){
    pair<int, pair<int, int> > p = q.top();
    q.pop();
    a = p.second.first;
    b = p.second.second;
    int w = p.first;
    if(vis[a][b]) continue;
    vis[a][b] = true;
    sum += w;
    for(int i = 0; i < 4; i++){
      int px = b + fx[i];
      int py = a + fy[i];
      if(px >= 0 && px < c && py >= 0 && py < r && dis[py][px] > dis[a][b] + n[py][px]){
        dis[py][px] = dis[a][b] + n[py][px];
        q.push(make_pair(dis[py][px], make_pair(py, px)));
      }
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, r, c, a;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &r, &c);
    for(int i = 0; i < r; i++){
      for(int j = 0; j < c; j++){
        scanf("%d", &a);
        n[i][j] = a;
      }
    }
    dijkstra(0, 0, r, c);
    printf("%d\n", dis[r - 1][c - 1]);
  }
  return 0;
}
