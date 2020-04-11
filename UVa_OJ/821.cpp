#include <bits/stdc++.h>
#define le 102
using namespace std;
vector<int> v[le];
bool vis[le];
int dis[le];
void bfs(int a){
  for(int i = 0; i < le; vis[i] = false, dis[i] = 0, i++);
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
        dis[e] = dis[p] + 1;
        q.push(e);
      }
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int a, b, co = 0;
  set<int> st;
  while(scanf("%d %d", &a, &b) != EOF && (a || b)){
    v[a].push_back(b);
    st.insert(a);
    st.insert(b);
    while(scanf("%d %d", &a, &b) != EOF && (a || b)){
      v[a].push_back(b);
      st.insert(a);
      st.insert(b);
    }
    int ans = 0;
    for(set<int> :: iterator it = st.begin(); it != st.end(); it++){
      bfs((*it));
      for(set<int> :: iterator it1 = st.begin(); it1 != st.end(); it1++){
        ans += dis[(*it1)];
      }
    }
    printf("Case %d: average length between pages = %.3lf clicks\n", ++co, (ans * 1.0) / (st.size() * (st.size() - 1.0)));
    for(int i = 0; i < le; v[i].clear(), i++);
    st.clear();
  }
  return 0;
}
