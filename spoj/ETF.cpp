#include <bits/stdc++.h>
#define le 1000006
#define ll long long int
using namespace std;
ll n[le];
bool m[le];
void fi(){
    for(int i = 1; i < le; n[i] = i, i++);
    n[1] = 1;
    m[1] = 1;
    for(int i = 2; i < le; i++){
        if(!m[i]){
            for(int j = i; j < le; j += i){
                m[j] = 1;
                n[j] = (n[j] * (i - 1)) / i;
            }
        }
    }
}
int main(){
    fi();
    int t, a;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &a);
        printf("%d\n", n[a]);
    }
    return 0;
}
