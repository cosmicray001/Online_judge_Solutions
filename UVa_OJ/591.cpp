#include <bits/stdc++.h>
#define le 55
using namespace std;
int n[le];
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int len, sum, co = 0;
    while(scanf("%d", &len) != EOF && len){
        sum = 0;
        for(int i = 0; i < len; scanf("%d", &n[i]), sum += n[i], i++);
        sum /= len;
        int c = 0;
        for(int i = 0; i < len; i++){
            if(n[i] < sum) c += (sum - n[i]);
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n", ++co, c);
    }
    return 0;
}
