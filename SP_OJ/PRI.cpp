#include <bits/stdc++.h>
#define le 100000008
using namespace std;
int n[le >> 6], pos[le], ans;
vector<int> v;
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
int fnc(int a){
    double x = sqrt(pos[a] * 2.0);
    if(floor(x + .50) < ceil(x)) ans = int(x);
    else ans = ceil(x);
    return ans;
}
int ok(int ve){
    double x = sqrt(pos[ve] * 2.0);
    if(floor(x + .5) < ceil(x)) return int(x);
    return ceil(x);
}
int fnc1(int a){
    int hi = v.size() - 1, lo = 1, mid, ve;
    while(lo <= hi){
        mid = lo + (hi - lo) / 2;
        int x = ok(mid);
        if(ans == x){
            ve = mid;
            hi = mid - 1;
        }
        else if(ans < x) hi = mid - 1;
        else lo = mid + 1;
    }
    return pos[a] - ve + 1;
}
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    v.push_back(0);
    v.push_back(2);
    pos[2] = 1;
    int c = 2;
    for(int i = 3; i < le; i += 2){
        if(!ck(i)){
            v.push_back(i);
            pos[i] = c++;
        }
    }
    printf("%d\n", c);
}
int main(){
    se();
    int t, a;
    for(int i = 1; i < 11; printf("%d ", v[i]), i++);
    printf("-->%d\n", v.size());
    for(scanf("%d", &t); t--; ){
        scanf("%d", &a);
        if(a == 2 || (a & 1 && !ck(a))) printf("%d %d\n", fnc(a), fnc1(a));
        else printf("-1\n");
    }
    return 0;
}
