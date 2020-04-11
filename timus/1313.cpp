#include <bits/stdc++.h>
#define le 102
using namespace std;
int n[le][le];
int main(){
    freopen("input.txt", "r", stdin);
    int len;
    scanf("%d", &len);
    for(int i = 0; i < len; i++) for(int j = 0; j < len; scanf("%d", &n[i][j]), j++);
    printf("%d", n[0][0]);
    for(int i = 1; i < len; i++) for(int j = 0, k = i; j <= i; printf(" %d", n[k][j]), j++, k--);
    for(int i = 0; i < len; i++) for(int j = i + 1, k = len - 1; j < len; printf(" %d", n[k][j]), j++, k--);
    printf("\n");
    return 0;
}
