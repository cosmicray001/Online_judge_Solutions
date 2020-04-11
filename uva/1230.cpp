#include <bits/stdc++.h>
using namespace std;
int m;
int fnc(int a, int b){
    if(b == 0) return 1 % m;
    if(b % 2 == 0){
        int rt = fnc(a, b / 2);
        return ((rt % m) * (rt % m) % m);
    }
    return ((a % m) * fnc(a, b - 1) % m) % m;
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int a, b, c, z, t;
    while(scanf("%d", &t) != EOF && t){
        while(t--){
            scanf("%d %d %d", &a, &b, &c);
            m = c;
            printf("%d\n", fnc(a, b));
        }
    }
    return 0;
}
