#include <bits/stdc++.h>
#define le 1000006
using namespace std;
int p[le], ans;
bool ck[le], vis[le];
struct edge{
  int x, y, w;
};
bool comp(edge a, edge b){
  return a.w < b.w;
}
vector<edge> v;
int fnc(int a){
  if(p[a] == a) return a;
  return p[a] = fnc(p[a]);
}
void mst(int n){
  sort(v.begin(), v.end(), comp);
  int co = 0;
  ans = 0;
  for(int i = 0; i < (int)v.size(); i++){
    int a = fnc(v[i].x);
    int b = fnc(v[i].y);
    if(a != b){
      ck[a] = true;
      ck[b] = true;
      p[b] = a;
      ans = max(ans, v[i].w);
      co++;
      if(co == n - 1) break;
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int n, m, a, b, c;
  while(scanf("%d %d", &n, &m) != EOF && (n || m)){
    for(int i = 0; i < n + 1; p[i] = i, i++);
    memset(ck, 0, sizeof(ck));
    edge eg;
    for(int i = 0; i < m; i++){
      scanf("%d %d %d", &a, &b, &c);
      eg.x = a;
      eg.y = b;
      eg.w = c;
      v.push_back(eg);
    }
    if(!m) printf("IMPOSSIBLE\n");
    else{
      mst(n);
      bool f = true;
      for(int i = 0; i < n; i++){
        if(!ck[i]){
          f = false;
          break;
        }
      }
      if(f) printf("%d\n", ans);
      else printf("IMPOSSIBLE\n");
    }
    v.clear();
  }
  return 0;
}
