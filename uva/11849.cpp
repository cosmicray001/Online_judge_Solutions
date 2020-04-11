#include <bits/stdc++.h>
#define le 1000006
using namespace std;
int n[le];
bool fnc(int key, int len){
    int hi = len - 1, lo = 0, mid;
    while(lo <= hi){
        mid = lo + (hi - lo) / 2;
        if(key == n[mid]) return 1;
        else if(key < n[mid]) hi = mid - 1;
        else lo = mid + 1;
    }
    return 0;
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int len, len1, a, b;
    while(scanf("%d %d", &len, &len1) != EOF && len && len1){
        for(int i = 0; i < len; scanf("%d", &n[i]), i++);
        int sum = 0;
        while(len1--){
            scanf("%d", &a);
            if(fnc(a, len)) sum++;
        }
        printf("%d\n", sum);
    }
    return 0;
}
