#include <bits/stdc++.h>
#define le 100000008
#define hii 5761467
using namespace std;
int n[le >> 6], v[hii], pos[le], c[le], r[le];
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
int fnc(int a){
    double x = sqrt(pos[a] * 2.0);
    if(floor(x + .5) < ceil(x)) return int(x);
    return ceil(x);
}
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    pos[2] = 1;
    v[1] = 2;
    int co = 1;
    r[2] = 1;
    c[2] = 1;
    for(int i = 3, j = 2; i < le; i += 2){
        if(!ck(i)){
            v[j] = i;
            pos[i] = j;
            r[i] = fnc(i);
            if(fnc(v[j - 1]) != r[i]) co = 1;
            else co++;
            c[i] = co;
            j++;
        }
    }
}
int main(){
    se();
    int t, a;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &a);
        if(a == 2 || (a & 1 && !ck(a))) printf("%d %d\n", r[a], c[a]);
        else printf("-1\n");
    }
    return 0;
}
