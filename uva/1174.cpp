#include <bits/stdc++.h>
#define le 50004
#define li 2003
using namespace std;
int p[li];
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
int mst(int n){
  sort(v.begin(), v.end(), comp);
  int ans = 0, co = 0;
  for(int i = 0; i < (int)v.size(); i++){
    int a = fnc(v[i].x);
    int b = fnc(v[i].y);
    if(a != b){
      p[b] = a;
      ans += v[i].w;
      co++;
      if(co == n - 1) break;
    }
  }
  return ans;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, n, m, c;
  string s, s1;
  for(scanf("%d", &t); t--; ){
    if(co) printf("\n");
    int l = 1;
    edge eg;
    map<string, int> mp;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n + 1; p[i] = i, i++);
    for(int i = 0; i < m; i++){
      cin >> s >> s1 >> c;
      if(!mp[s]) mp[s] = l++;
      if(!mp[s1]) mp[s1] = l++;
      eg.x = mp[s];
      eg.y = mp[s1];
      eg.w = c;
      v.push_back(eg);
    }
    printf("%d\n", mst(n));
    v.clear();
    co++;
  }
  return 0;
}
