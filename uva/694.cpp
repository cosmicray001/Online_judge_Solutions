#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll a, b, c;
    int co = 0;
    while(scanf("%lld %lld", &a, &b) != EOF){
        if(a < 0 && b < 0) break;
        ll temp = a;
        c = 0;
        while(a <= b){
            if(a == 1){
              c++;
              break;
            }
            else if(a % 2 == 0){
                c++;
                a /= 2;
            }
            else{
                c++;
                a = (a * 3) + 1;
            }
        }
        printf("Case %d: A = %lld, limit = %lld, number of terms = %lld\n", ++co, temp, b, c);
    }
    return 0;
}
