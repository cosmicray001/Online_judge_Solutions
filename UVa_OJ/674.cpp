#include <bits/stdc++.h>
#define le 75003
using namespace std;
int dp[6][le], am, n[] = {50, 25, 10, 5, 1};
bool vis[6][le];
int fnc(int i, int j){
    if(i >= 5){
        if(j == 0) return 1;
        return 0;
    }
    if(vis[i][j]) return dp[i][j];
    int ans = 0;
    if(j - n[i] >= 0) ans = fnc(i, j - n[i]);
    int ans1 = fnc(i + 1, j);
    vis[i][j] = true;
    return dp[i][j] = ans + ans1;
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    while(scanf("%d", &am) != EOF) printf("%d\n", fnc(0, am));
    return 0;
}
