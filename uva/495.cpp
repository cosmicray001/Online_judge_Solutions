#include <bits/stdc++.h>
#define le 5003
#define ll long long int
using namespace std;
ll n[le];
int fnc(int a){
    if(a < 2) return a;
    if(n[a] == 0) n[a] = fnc(a - 1) + fnc(a - 2);
    return n[a];
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int a;
    while(scanf("%d", &a) != EOF) printf("The Fibonacci number for %d is %lld\n", a, fnc(a));
    return 0;
}
