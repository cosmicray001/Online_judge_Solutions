#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t, co = 0;
    double v1, v2, v3, a1, a2;
    double re, re1;
    scanf("%d", &t);
    while(t--){
        scanf("%lf %lf %lf %lf %lf", &v1, &v2, &v3, &a1, &a2);
        double t1 = v1 / a1;
        double t2 = v2 / a2;
        double ti = max(t1, t2);
        re = v3 * ti;
        re1 = (v1 * t1) - (.5 * a1 * pow(t1, 2));
        re1 += (v2 * t2) - (.5 * a2 * pow(t2, 2));
        printf("Case %d: %.10lf %.10lf\n", ++co, re1, re);
    }
 
    return 0;
}
 
