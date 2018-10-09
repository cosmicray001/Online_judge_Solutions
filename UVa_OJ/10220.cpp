#include <bits/stdc++.h>
#define le 1003
using namespace std;
double n[le];
int main(){
    n[0] = 0.0;
    for(int i = 1; i < le; i++) n[i] = n[i - 1] + log10(i * 1.0);
    int a;
    while(scanf("%d", &a) != EOF) printf("%d\n", (int)(n[a]) + 1);
    return 0;
}
