#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll a;
    while(scanf("%lld", &a) != EOF){
        a = ((a * (a + 2) / 2) * 3);
        printf("%lld\n", a - 6);
    }
    return 0;
}
