#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t, co = 0;
    double a, b, c;
    while(scanf("%lf %lf %lf", &a, &b, &c) != EOF && a != -1){
        double d1 = (a * c) / b;
        if(b - d1 < 1) printf("Set %d:\nPoor King!\n", ++co);
        else{
            double d = ((d1 + c) * (a + d1)) / (b - d1);
            printf("Set %d:\n%.4lf\n", ++co, d1 + d);
        }
    }
    return 0;
}
