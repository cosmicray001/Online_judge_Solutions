#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ll a, b, n, c;
    int t;
    for(scanf("%d", &t); t--; ){
        scanf("%lld %lld", &n, &c);
        if(n < c || (n + c) % 2 != 0) printf("impossible\n");
        else{
            a = n + c;
            a /= 2;
            b = n - a;
            printf("%lld %lld\n", a, b);
        }
    }
    return 0;
}
