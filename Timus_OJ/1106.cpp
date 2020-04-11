#include <bits/stdc++.h>
#define le 102
using namespace std;
vector<int> v[le];
set<int> st;
set<int> ts;
int dis[le];
bool vis[le];
bool f = true;
void bfs(int a){
  if(v[a].size() == 0){
    f = false;
    return;
  }
  for(int i = 0; i < le; dis[i] = 0, i++);
  st.insert(a);
  dis[a] = 0;
  vis[a] = true;
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    int p = q.front();
    q.pop();
    for(int i = 0; i < v[p].size(); i++){
      int e = v[p][i];
      if(!vis[e]){
        vis[e] = true;
        dis[e] = (dis[p] + 1) % 2;
        if(dis[e]) ts.insert(e);
        else st.insert(e);
        q.push(e);
      }
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  int n, a;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    while(scanf("%d", &a) != EOF && a) v[i + 1].push_back(a);
  }
  for(int i = 1; i < n + 1 && f; i++) if(!vis[i]) bfs(i);
  if(!f) printf("0\n");
  else{
    printf("%d\n", st.size());
    int i = 0;
    for(set<int> :: iterator it = st.begin(); it != st.end(); it++, i++){
      if(i) printf(" ");
      printf("%d", (*it));
    }
    printf("\n");
  }
  return 0;
}
