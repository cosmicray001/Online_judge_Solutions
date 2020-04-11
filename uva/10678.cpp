#include <bits/stdc++.h>
using namespace std;
#define pi 2 * acos(0.0)
int main(){
  int t;
  double a, b;
  for(scanf("%d", &t); t--; ){
    scanf("%lf %lf", &a, &b);
    a = a / 2;
    b = b / 2;
    a = sqrt(b * b - a * a);
    printf("%.3lf\n", pi * a * b);
  }
  return 0;
}
