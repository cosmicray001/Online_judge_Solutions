#include <bits/stdc++.h>

using namespace std;

int main()
{
 int a, b;
 scanf("%d %d", &a, &b);
 double re = (a + b) / 2.0;
 double x = re - (int) re;
 double ans = 0;
 if(x >= .50) ans = ceil(re);
 else ans = floor(re);
 printf("%.0lf\n", ans);

 return 0;
}
