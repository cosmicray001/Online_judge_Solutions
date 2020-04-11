#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, x, y, z;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d %d", &x, &y, &z);
        printf("%d\n", z*(2*x-y)/(x+y));
    }
    return 0;
}
