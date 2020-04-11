#include <bits/stdc++.h>
#define le 755
using namespace std;
struct edge{
  int x, y;
  double w;
};
bool comp(edge a, edge b){
  return a.w < b.w;
}
edge arr[le * le];
int p[le], r[le];
double h1[le], h2[le];
bool ck[le][le];
int fnc(int a){
  if(p[a] == a) return a;
  return p[a] = fnc(p[a]);
}
double dis(double a, double b, double aa, double bb){
  a = (a - aa) * (a - aa);
  b = (b - bb) * (b - bb);
  return sqrt(a + b);
}
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int t, len, q, a, b;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &len);
    for(int i = 1; i < len + 1; scanf("%lf %lf", &h1[i], &h2[i]), i++);
    scanf("%d", &q);
    int co = 0, e = 0;
    for(int i = 0; i < le; p[i] = i, r[i] = 1, i++) for(int j = 0; j < le; ck[i][j] = false, j++);
    for(int i = 0; i < q; i++){
      scanf("%d %d", &a, &b);
      co++;
      ck[a][b] = true;
      ck[b][a] = true;
    }
    edge eg;
    for(int i = 1; i < len; i++){
      for(int j = i + 1; j < len + 1; j++){
        if(ck[i][j]) eg.w = 0.0;
        else eg.w = dis(h1[i], h2[i], h1[j], h2[j]);
        eg.x = i;
        eg.y = j;
        arr[e++] = eg;
      }
    }
    if(co == len - 1) printf("No new highways need\n");
    else{
      sort(arr, arr + e, comp);
      //for(int i = 0; i < e; i++) printf("%d ----- %d ---> %lf\n", arr[i].x, arr[i].y, arr[i].w);
      for(int i = 0; i < e; i++){
        a = fnc(arr[i].x);
        b = fnc(arr[i].y);
        if(a != b){
          co++;
          if(r[a] >= r[b]){
            r[a] += r[b];
            p[b] = a;
          }
          else{
            r[b] += r[a];
            p[a] = b;
          }
          if(!ck[arr[i].x][arr[i].y])printf("%d %d\n", arr[i].x, arr[i].y);
        }
      }
    }
    if(t) printf("\n");
  }
  return 0;
}
