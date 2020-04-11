#include <bits/stdc++.h>
using namespace std;
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  double a, b;
  int t, co = 0;
  for(scanf("%d", &t); t--; ){
    scanf("%lf %lf", &a, &b);
    a = (9.0 * a) / 5.0 + 32;
    a += b;
    a = ((a - 32) * 5.0) / 9.0;
    printf("Case %d: %.2lf\n", ++co, a);
  }
  return 0;
}
