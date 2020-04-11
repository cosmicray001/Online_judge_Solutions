#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0;
  double h, w, l;
  for(scanf("%d", &t); t--; ){
    scanf("%lf%lf", &l, &w);
    h = (w + l - sqrt(w * w + l * l - w * l)) / 6;
    printf("Case %d: %lf\n", ++co, (w - 2 * h) * (l - 2 * h) * h);
  }
  return 0;
}
