#include <bits/stdc++.h>
#define le 101
using namespace std;
vector<int> v[le];
struct edge{
  char f, l;
};
bool vis[15];
int dis[15];
int bfs(int s){
  memset(dis, 0, sizeof(dis));
  memset(vis, 0, sizeof(vis));
  vis[s] = true;
  dis[s] = 0;
  int sum = 0;
  queue<int> q;
  q.push(s);
  while(!q.empty()){
    int u = q.front();
    q.pop();
    for(int i = 0; i < v[u].size(); i++){
      int y = v[u][i];
      if(vis[y] == false){
        vis[y] = true;
        dis[y] = dis[u] + 1;
        q.push(y);
        sum = max(sum, dis[y]);
      }
    }
  }
  return sum + 1;
}
int main(){
  //freopen("input.txt", "r", stdin);
  int t;
  char ch[20];
  edge arr[15];
  scanf("%d", &t);
  for(int i = 0; i < t; i++){
    scanf("%s", ch);
    arr[i].f = ch[0];
    arr[i].l = ch[strlen(ch) - 1];
  }
  for(int i = 0; i < t; i++){
    for(int j = 0; j < t; j++){
      if(i != j){
        if(arr[i].l == arr[j].f) v[i].push_back(j);
      }
    }
  }
  int sum = 0;
  for(int i = 0; i < t; i++) sum = max(sum, bfs(i));
  printf("%d\n", sum);
  return 0;
}
