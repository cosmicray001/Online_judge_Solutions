#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    double a;
    while(scanf("%lf", &a) != EOF && a) printf("%s\n", (floor(sqrt(a)) == ceil(sqrt(a))) ? "yes" : "no");
    return 0;
}
