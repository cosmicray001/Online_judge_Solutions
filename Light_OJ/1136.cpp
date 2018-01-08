#include <bits/stdc++.h>

using namespace std;
int fnc(long long int n) {
    if (n%3 != 2) return (n/3*2);
    else return (n/3*2+1);
}


int main()
{
    int t, c = 0;
    long long int a, b;
    scanf("%d", &t);
    while(t--){
        scanf("%lld %lld", &a, &b);
        if(a > b) swap(a, b);
        a--;
        a = fnc(a);
        b = fnc(b);
        printf("Case %d: %lld\n", ++c, b - a);
    }

    return 0;
}
