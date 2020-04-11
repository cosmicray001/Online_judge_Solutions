#include <bits/stdc++.h>
#define le 86028150
#define lx 5000006
using namespace std;
int n[le >> 6], v[lx];
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    v[1] = 2;
    for(int i = 3, j = 2; i < le; i += 2) if(!ck(i)) v[j++] = i;
}
int main(){
    se();
    int t, a;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &a);
        printf("%d\n", v[a]);
    }
    return 0;
}
