#include <bits/stdc++.h>
#define len_max 110

using namespace std;
int n[len_max];

int main()
{
    int len, t;
    scanf("%d %d", &len, &t);
    for(int i = 0; i < len; i++) scanf("%d", &n[i]);
    int c = 0, to = 0, k;
    for(int i = 0; i < len; i++){
        k = 86400 - n[i];
        to += k;
        c++;
        if(to >= t) break;
    }
    printf("%d\n", c);
    
    return 0;
}
