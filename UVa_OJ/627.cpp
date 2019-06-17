#include <bits/stdc++.h>
#define le 303
using namespace std;
vector<int> v[le];
bool vis[le];
int p[le];
void fnc(int a){
  if(p[a] == -1){
    printf("%d", a);
    return;
  }
  fnc(p[a]);
  printf(" %d", a);
}
void bfs(int a, int b){
  for(int i = 0; i < le; vis[i] = false, p[i] = -1, i++);
  vis[a] = true;
  p[a] = -1;
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    a = q.front();
    q.pop();
    for(int i = 0; i < v[a].size(); i++){
      int e = v[a][i];
      if(vis[e] == false){
        vis[e] = true;
        p[e] = a;
        q.push(e);
      }
    }
  }
  if(vis[b]){
    fnc(b);
    printf("\n");
  }
  else printf("connection impossible\n");
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int n, m, a, b;
  string s;
  while(scanf("%d", &n) != EOF){
    printf("-----\n");
    for(int i = 0; i < n; i++){
      a = b = 0;
      int idx;
      cin >> s;
      for(int i = 0; i < s.size(); i++){
        if(s[i] == '-'){
          idx = i + 1;
          break;
        }
        else a = (a * 10) + (s[i] - '0');
      }
      for(int i = idx; i < s.size(); i++){
        if(s[i] == ','){
          v[a].push_back(b);
          b = 0;
        }
        else b = (b * 10) + (s[i] - '0');
      }
      if(b != 0) v[a].push_back(b);
    }
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
      scanf("%d %d", &a, &b);
      bfs(a, b);
    }
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
