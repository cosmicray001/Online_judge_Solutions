#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    long long int n[62];
    n[0] = 0;
    n[1] = 1;
    n[2] = 1;
    for(int i = 3; i < 62; i++){
        n[i] = n[i - 2] + n[i - 1];
    }
    //for(int i = 0; i < 60; i++) printf("%lld\n", n[i]);
    for(int i = 0; i < t; i++){
        int x;
        scanf("%d", &x);
        printf("Fib(%d) = %lld\n", x, n[x]);
    }

    return 0;
}
