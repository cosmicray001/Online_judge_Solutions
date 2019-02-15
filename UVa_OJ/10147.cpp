#include <bits/stdc++.h>
//#define le 562505
#define le 100005
using namespace std;
int p[le];
struct edge{
  double x, y, w;
};
bool comp(edge a, edge b){
  return a.w < b.w;
}
int fnc(int a){
  if(p[a] == a) return a;
  return p[a] = fnc(p[a]);
}
double dis(double a, double b, double x, double y){
  a = (a - x) * (a - x);
  b = (b - y) * (b - y);
  return sqrt(a + b);
}
vector<pair<double, double> > v;
int main(){
  freopen("input.txt", "r", stdin);
  int t, co = 0, n, m, x1, y1;
  double a, b;
  for(scanf("%d", &t); t--; ){
    if(co++) printf("\n");
    scanf("%d", &n);
    for(int i = 0; i < n + 1; p[i] = 1, i++);
    for(int i = 0; i < n; i++){
      scanf("%lf %lf", &a, &b);
      v.push_back(make_pair(a, b));
    }
    edge arr[le];
    int l = 1;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        if(i != j){
          double d = dis(v[i].first, v[i].second, v[j].first, v[j].second);
          arr[l].x = i + 1;
          arr[l].y = j + 1;
          arr[l].w = d;
          l++;
        }
      }
    }
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
      scanf("%d %d", &x1, &y1);
      x1 = fnc(x1);
      y1 = fnc(y1);
      if(x1 > y1) swap(x1, y1);
      p[y1] = x1;
    }
    sort(arr, arr + l, comp);
    vector<pair<int, int> > st;
    double sum = 0;
    for(int i = 0; i < l; i++){
      int a1 = fnc(arr[i].x);
      int b1 = fnc(arr[i].y);
      if(a1 != b1){
        st.push_back(make_pair(arr[i].x, arr[i].y));
        if(a1 > b1) swap(a1, b1);
        p[b1] = a1;
      }
    }
    sort(st.begin(), st.end());
    for(int i = 0; i < st.size() - 1; i++) printf("%d %d\n", st[i].first, st[i].second);
    printf("%d %d\n", st[st.size() - 1].first, st[st.size() - 1].second);
    v.clear();
  }
  return 0;
}

