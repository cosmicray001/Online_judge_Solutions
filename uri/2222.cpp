#include <bits/stdc++.h>
#define c 10004
#define r 64
using namespace std;
int n[c][r];
int n1[64];
int temp[64], t1[64];
int ck1[64], ck2[64];
int fnc1(int a, int b){
    memset(n1, 0, sizeof(n1));
    int sum = 0;
    for(int i = 0; i < n[a - 1][0]; i++){
        if(n1[n[a - 1][i + 1]] == 0){
            sum++;
            n1[n[a - 1][i + 1]] = 1;
        }
    }
    for(int i = 0; i < n[b - 1][0]; i++){
        if(n1[n[b - 1][i + 1]] == 0){
            sum++;
            n1[n[b - 1][i + 1]] = 1;
        }
    }
    return sum;
}
int fnc(int a, int b){
    int c1 = 0, c2 = 0;
    memset(ck1, 0, sizeof(ck1));
    memset(ck2, 0, sizeof(ck2));
    for(int i = 0; i < n[a - 1][0]; i++){
        if(ck1[n[a - 1][i + 1]] == 0){
            c1++;
            ck1[n[a - 1][i + 1]] = 1;
        }
    }
    for(int i = 0; i < n[b - 1][0]; i++){
        if(ck2[n[b - 1][i + 1]] == 0){
            c2++;
            ck2[n[b - 1][i + 1]] = 1;
        }
    }
    return c1 + c2 - fnc1(a, b);
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, a, b, x, m, len;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &x);
        for(int i = 0; i < x; i++){
            scanf("%d", &len);
            n[i][0] = len;
            for(int j = 0; j < len; scanf("%d", &n[i][j + 1]), j++);
        }
        for(scanf("%d", &m); m--; ){
            scanf("%d %d %d", &x, &a, &b);
            printf("%d\n", x == 1 ? fnc(a, b) : fnc1(a, b));
        }
    }
    return 0;
}
