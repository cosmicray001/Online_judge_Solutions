#include <bits/stdc++.h>
#define le 79804
#define li 402
using namespace std;
int p[li], ans;
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
  ans = 0;
  int co = 0;
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
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int n, m, c;
  string s, s1;
  while(scanf("%d %d", &n, &m) != EOF && (n || m)){
    map<string, int> mp;
    for(int i = 1; i < n + 1; i++){
      p[i] = i;
      cin >> s;
      mp[s] = i;
    }
    edge eg;
    for(int i = 0; i < m; i++){
      cin >> s >> s1 >> c;
      eg.x = mp[s];
      eg.y = mp[s1];
      eg.w = c;
      v.push_back(eg);
    }
    cin >> s;
    mp.clear();
    mst(n);
    c = fnc(1);
    bool f = true;
    for(int i = 2; i < n + 1; i++){
      if(c != fnc(i)){
        f = false;
        break;
      }
    }
    if(f) printf("%d\n", ans);
    else printf("Impossible\n");
    v.clear();
  }
  return 0;
}
