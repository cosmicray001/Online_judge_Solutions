#include <bits/stdc++.h>
#define le 3003
using namespace std;
int n[le], m[le];
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int len;
    while(scanf("%d", &len) != EOF){
        scanf("%d", &n[0]);
        if(len == 1) printf("Jolly\n");
        else{
            for(int i = 1; i < len; scanf("%d", &n[i]), m[i - 1] = abs(n[i] - n[i - 1]), i++);
            sort(m, m + (len - 1));
            bool f = 1;
            for(int i = 1; i < len - 2; i++){
                if(m[i] <= m[i - 1] || m[i] - m[i - 1] != 1){
                    f = 0;
                    break;
                }
            }
            printf("%s\n", f ? "Jolly" : "Not jolly");
        }
    }
    return 0;
}
