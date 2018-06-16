#include <bits/stdc++.h>
#define mod 10000007
#define le 10004
#define ll long long
using namespace std;
ll n[le];
int main(){
    int t, co = 0, m;
    for(scanf("%d", &t); t--; ){
        scanf("%lld %lld %lld %lld %lld %lld %d", &n[0], &n[1], &n[2], &n[3], &n[4], &n[5], &m);
        for(int i = 6; i <= m; i++){
            n[i] = (n[i - 1] + n[i - 2] + n[i - 3] + n[i - 4] + n[i - 5] + n[i - 6]) % mod;
        }
        printf("Case %d: %lld\n", ++co, n[m] % mod);
    }
    return 0;
}
