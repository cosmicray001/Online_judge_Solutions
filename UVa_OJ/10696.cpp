#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int a;
    while(scanf("%d", &a) != EOF && a) printf("f91(%d) = %d\n", a, (a >= 101) ? a - 10 : 91);
    return 0;
}
