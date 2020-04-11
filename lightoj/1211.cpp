#include <bits/stdc++.h>
#define inf 10000
 
using namespace std;
 
int main()
{
  int t, co = 0, n;
  int x, y, z, a, b, c;
  scanf("%d", &t);
  while(t--){
    scanf("%d", &n);
    int xm = 0, ym = 0, zm = 0, ma = inf, mb = inf, mc = inf;
    while(n--){
      scanf("%d %d %d %d %d %d", &x, &y, &z, &a, &b, &c);
      xm = max(xm, x);
      ym = max(ym, y);
      zm = max(zm, z);
     
      ma = min(ma, a);
      mb = min(mb, b);
      mc = min(mc, c);
    }
    int vol = 0;
    if(ma > xm && mb > ym && mc > zm){
      vol = (ma - xm) * (mb - ym) * (mc - zm);
    }
    printf("Case %d: %d\n", ++co, vol);
  }
 
  return 0;
}
