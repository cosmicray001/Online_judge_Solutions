#include <bits/stdc++.h>
#define le 3003
using namespace std;
int n[le], m[le];
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int len;
    while(scanf("%d", &len) != EOF){
        memset(m, 0, sizeof(m));
        for(int i = 0; i < len; scanf("%d", &n[i]), i++);
        for(int i = 1; i < len; i++){
            if(abs(n[i] - n[i - 1]) < len) m[abs(n[i] - n[i - 1])]++;
        }
        bool f = true;
        for(int i = 1; i < len; i++) if(!m[i]){
            f = false;
            break;
        }
        printf("%s\n", f ? "Jolly" : "Not jolly");
    }
    return 0;
}
