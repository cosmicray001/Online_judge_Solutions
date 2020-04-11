#include <bits/stdc++.h>
#define le 1004
using namespace std;
int n[le];
int main(){
    //freopen("input.txt", "r", stdin);
    int t, len;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &len);
        for(int i = 0; i < len; scanf("%d", &n[i]), i++);
        sort(n, n + len);
        int ans = 0;
        for(int i = 0; i < len; ans += (n[i] - n[0]), i++);
        printf("%d\n", ans);
    }
    return 0;
}
