#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int t, co = 0;
  double a, b, c, d, x, h;
  for(scanf("%d", &t); t--; ){
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    x = fabs(a - c);
    double s = (x + d + b) * .5;
    s = sqrt(s * (s - x) * (s - d) * (s - b));
    h = (s * 2) / x;
    printf("Case %d: %.10lf\n", ++co, (.5 * (a + c) * h));
  }
  return 0;
}
