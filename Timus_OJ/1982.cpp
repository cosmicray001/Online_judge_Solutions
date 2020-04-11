#include <bits/stdc++.h>
#define le 102
#define ll long long int
using namespace std;
struct edge{
  int x, y;
  ll w;
};
bool comp(edge a, edge b){
  return a.w < b.w;
}
vector<edge> v;
vector<int> v1;
ll arr[le][le];
bool ck[le];
int p[le];
int fnc(int a){
  if(p[a] == a) return a;
  return p[a] = fnc(p[a]);
}
int main(){
  //freopen("input.txt", "r", stdin);
  for(int i = 0; i < le; p[i] = i, ck[i] = false, i++);
  int n, len, a;
  ll cost;
  scanf("%d %d", &n, &len);
  for(int i = 0; i < len; scanf("%d", &a), v1.push_back(a), ck[a] = true, i++);
  edge eg;
  for(int i = 1; i < n + 1; i++){
    for(int j = 1; j < n + 1; j++){
      scanf("%lld", &arr[i][j]);
    }
  }
  for(int i = 1; i < n + 1; i++){
    for(int j = i; j < n + 1; j++){
      if(ck[i] && ck[j]) eg.w = 0;
      else eg.w = arr[i][j];
      eg.x = i;
      eg.y = j;
      v.push_back(eg);
    }
  }
  ll sum = 0;
  sort(v.begin(), v.end(), comp);
  for(int i = 0; i < v.size(); i++){
    int aa = fnc(v[i].x), bb = fnc(v[i].y);
    if(aa != bb){
      p[aa] = bb;
      sum += v[i].w;
    }
  }
  printf("%lld\n", sum);
  return 0;
}
