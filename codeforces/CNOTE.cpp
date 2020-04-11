#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    int t, w, h, s, len;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d %d %d", &w, &h, &s, &len);
        w -= h;
        bool f = false;
        int x, y;
        while(len--){
            scanf("%d %d", &x, &y);
            if(x >= w && y <= s) f = true;
        }
        printf("%s\n", f ? "LuckyChef" : "UnluckyChef");
    }
    return 0;
}
