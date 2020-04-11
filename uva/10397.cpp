#include <bits/stdc++.h>
#define ll long long int
#define le 752
using namespace std;
struct edge{
  int x, y;
  double w;
};
bool comp(edge a, edge b){
  return (a.w < b.w);
}
vector<edge> v;
vector<pair<double, double> > h;
int p[le];
bool ck[le][le];
int fnc(int a){
  if(p[a] == a) return a;
  return p[a] = fnc(p[a]);
}
void clr(){
  v.clear();
  h.clear();
  for(int i = 0; i < le; p[i] = i, i++);
  for(int i = 0; i < le; i++) for(int j = 0; j < le; ck[i][j] = false, j++);
}
double dis(double a, double b, double aa, double bb){
  a = (a - aa) * (a - aa);
  b = (b - bb) * (b - bb);
  return sqrt(a + b);
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int n, len, pp, q;
  double a, b;
  while(scanf("%d", &n) != EOF){
    clr();
    for(int i = 0; i < n; scanf("%lf %lf", &a, &b), h.push_back(make_pair(a, b)), i++);
    scanf("%d", &len);
    for(int i = 0; i < len; i++){
      scanf("%d %d", &pp, &q);
      ck[pp][q] = true;
      ck[q][pp] = true;
    }
    edge eg;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        if(i != j){
          double d = dis(h[i].first, h[i].second, h[j].first, h[j].second);
          if(ck[i + 1][j + 1]) eg.w = 0.0;
          else eg.w = d;
          eg.x = i + 1;
          eg.y = j + 1;
          v.push_back(eg);
        }
      }
    }
    double sum = 0;
    sort(v.begin(), v.end(), comp);
    for(int i = 0; i < v.size(); i++){
      int aa = fnc(v[i].x), bb = fnc(v[i].y);
      if(aa != bb){
        if(aa > bb) swap(aa, bb);
        p[aa] = bb;
        sum += v[i].w;
      }
    }
    printf("%.2lf\n", sum);
  }
  return 0;
}
