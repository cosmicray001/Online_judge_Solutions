#include <bits/stdc++.h>
#define le 10000007
using namespace std;
int n[le >> 6];
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
bool ckk(int a){
    int temp = a, len = 0;
    for(; a > 0; a /= 10; len++);
}
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    v.push_back(2);
    for(int i = 3; i < le; i += 2) if(!ck(i) && ckk(i)) v.push_back(i);
}
int main(){
    se();
}
