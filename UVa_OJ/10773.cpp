#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  double d, v, u;
  int t, co = 0;
  for(scanf("%d", &t); t--; ){
    scanf("%lf %lf %lf", &d, &v, &u);
    if(v >= u || u == 0 || v == 0) printf("Case %d: can't determine\n", ++co);
    else{
      double t1 = d / u;
      double t2 = d / (sqrt(u * u - v * v));
      printf("Case %d: %.3lf\n", ++co, abs(t1 - t2));
    }
  }
  return 0;
}
