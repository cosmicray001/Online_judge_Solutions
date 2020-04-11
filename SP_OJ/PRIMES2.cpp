#include <bits/stdc++.h>
#define le 1000000009
using namespace std;
int n[le >> 6];
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    int c = 0;
    printf("2\n");
    for(int i = 3; i < le; i += 2){
        if(!ck(i)){
            c++;
            if(c == 500){
                c = 0;
                printf("%d\n", i);
            }
        }
    }
}
int main(){
    se();
    return 0;
}
