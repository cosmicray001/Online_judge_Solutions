#include <bits/stdc++.h>
#define le 1003
using namespace std;
int n[le >> 6];
vector<int> v;
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    v.push_back(2);
    for(int i = 3; i < le; i += 2) if(!ck(i)) v.push_back(i);
}
int fnc(int a){
    int sum = 0;
    for(int i = 0; i < v.size() && v[i] * v[i] <= a; i++){
        if(a % v[i] == 0){
            sum++;
            for(; a % v[i] == 0; a /= v[i]);
        }
    }
    if(a != 1) sum++;
    return sum;
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    se();
    int a;
    while(scanf("%d", &a) != EOF && a) printf("%d : %d\n", a, fnc(a));
    return 0;
}
