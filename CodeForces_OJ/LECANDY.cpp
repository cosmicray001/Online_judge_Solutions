#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    int t, len, n, x;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &len, &n);
        int sum = 0;
        for(int i = 0; i < len; scanf("%d", &x), sum += x, i++);
        printf("%s\n", (sum <= n) ? "Yes" : "No");
    }
    return 0;
}
