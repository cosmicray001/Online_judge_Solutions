#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll rev;
bool ck(ll a){
    ll temp = a;
    for(; temp > 0; temp /= 10) rev = (rev * 10) + (temp % 10);
    return (rev == a);
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    ll a;
    for(scanf("%d", &t); t--; ){
        scanf("%lld", &a);
        ll c = 1;
        rev = 0;
        bool f = ck(a);
        a += rev;
        rev = 0;
        while(!ck(a)){
            c++;
            a += rev;
            rev = 0;
        }
        printf("%d %lld\n", c, a);
    }
    return 0;
}
