#include <bits/stdc++.h>
#define le 1000006
using namespace std;
double n[le];
int main(){
    n[0] = 0.0;
    for(int i = 1; i < le; n[i] = n[i - 1] + log10(i * 1.0), i++);
    int t, co = 0, a, b;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n", ++co, (int)(n[a] / log10(b)) + 1);
    }
    return 0;
}
