#include <bits/stdc++.h>
#define le 100005
using namespace std;
int p[le], n;
struct edge{
  int x, y, w;
};
bool comp(edge a, edge b){
  return a.w < b.w;
}
int fnc(int a){
  if(p[a] == a) return a;
  return p[a] = fnc(p[a]);
}
vector<edge> v;
vector<edge> ve;
void mst(){
  int sum = 0, co = 0;
  sort(v.begin(), v.end(), comp);
  for(int i = 0; i < v.size(); i++){
    int a = fnc(v[i].x);
    int b = fnc(v[i].y);
    if(a != b){
      p[b] = a;
      sum += v[i].w;
      ve.push_back(v[i]);
      co++;
      if(co == n - 1) break;
    }
  }
  printf("%d\n", sum);
}
void fnc(){
  int sum = INT_MAX;
  for(int j = 0; j < (int)ve.size(); j++){
    for(int i = 1; i < n + 1; p[i] = i, i++);
    int cost = 0, co = 0;
    for(int i = 0; i < (int)v.size(); i++){
      if(v[i].x == ve[j].x && v[i].y == ve[j].y && v[i].w == ve[j].w) continue;
      int a = fnc(v[i].x);
      int b = fnc(v[i].y);
      if(a != b){
        p[b] = a;
        co++;
        cost += v[i].w;
        if(co == n - 1) break;
      }
    }
    if(co < n - 1) continue;
    sum = min(sum, cost);
    printf("%d ", cost);
  }
  printf("\n");
}
int main(){
  freopen("input.txt", "r", stdin);
  int t, co = 0, m, a, b, c;
  for(scanf("%d", &t); t--; ){
    ve.clear();
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n + 1; p[i] = i, i++);
    edge eg;
    for(int i = 0; i < m; i++){
      scanf("%d %d %d", &a, &b, &c);
      eg.x = a;
      eg.y = b;
      eg.w = c;
      v.push_back(eg);
    }
    for(int i = 0; i < v.size(); i++){
      printf("%d %d %d\n", v[i].x, v[i].y, v[i].w);
    }
    mst();
    v.clear();
    fnc();
  }
  return 0;
}
