#include <bits/stdc++.h>
#define le 100005
using namespace std;
vector<int> v[le];
bool ck[le], vis[le], px[le];
set<int> st;
int bfs(int a){
  memset(vis, 0, sizeof(vis));
  memset(px, 0, sizeof(px));
  vis[a] = true;
  ck[a] = true;
  px[a] = true;
  int ans = 1, ans1 = 0;
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    int p = q.front();
    q.pop();
    for(int i = 0; i < v[p].size(); i++){
      int y = v[p][i];
      if(!vis[y]){
        if(px[p]){
          px[y] = false;
          ans1++;
        }
        else{
          px[y] = true;
          ans++;
        }
        vis[y] = true;
        ck[y] = true;
        q.push(y);
      }
    }
  }
  return max(ans, ans1);
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, n, a, b;
  for(scanf("%d", &t); t--; ){
    st.clear();
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
      scanf("%d %d", &a, &b);
      v[a].push_back(b);
      v[b].push_back(a);
      st.insert(a);
      st.insert(b);
    }
    memset(ck, 0, sizeof(ck));
    int ans = 0;
    for(set<int> :: iterator it = st.begin(); it != st.end(); it++){
      a = (*it);
      if(!ck[a]) ans += bfs(a);
    }
    printf("Case %d: %d\n", ++co, ans);
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
