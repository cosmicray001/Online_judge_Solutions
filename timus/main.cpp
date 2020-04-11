#include <bits/stdc++.h>
#define le 110
#define pi acos(-1.0)
using namespace std;
double n[le][3];
double fnc(double x1, double x2, double y1, double y2){
    x1 = pow((x1 - x2), 2);
    y1 = pow((y1 - y2), 2);
    return sqrt(x1 + y1);
}
int main(){
    int len;
    double r, sum = 0;
    scanf("%d %lf", &len, &r);
    for(int i = 0; i < len; scanf("%lf %lf", &n[i][0], &n[i][1]), i++);
    for(int i = 0; i < len - 1; i++){
        sum += fnc(n[i][0], n[i + 1][0], n[i][1], n[i + 1][1]);
    }
    sum += fnc(n[0][0], n[len - 1][0], n[0][1], n[len - 1][1]) + (2 * pi * r);
    printf("%.2lf\n", sum);
    return 0;
}
