#include <bits/stdc++.h>

using namespace std;

double fnc(double a, double b){
    if(a <= b) return 2;
    else{
        a += a;
        return ceil(a / b);
    }
}

int main()
{
    double a, b, x;
    scanf("%lf %lf", &a, &b);
    x = fnc(a, b);
    printf("%.0lf\n", x);

    return 0;
}
