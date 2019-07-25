#include <bits/stdc++.h>
using namespace std;
double s, l, n, c;
double ok(double H)
{
    double r,a;
    double b=H;
    double ve=l*0.5;
    r = b/2 + (ve*ve/(2*b));
    a = 2*asin(ve/r);
    return r*a;
}
double fnc(double lo, double hi){
  double mid;
  int t = 60;
  while(t--){
    mid = (lo + hi) / 2.0;
    if(ok(mid) > s) hi = mid;
    else lo = mid;
  }
  return mid;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0;
  for(scanf("%d", &t); t--; ){
    scanf("%lf%lf%lf",&l,&n,&c);
    s=(1.0 + (n * c) ) * l;
    double ans = fnc(0.0, l);
    printf("Case %d: %lf\n", ++co, ans);
  }
  return 0;
}
