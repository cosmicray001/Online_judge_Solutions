#include <bits/stdc++.h>
#define le 110

using namespace std;
int n[le];

int main()
{
    int len;
    scanf("%d", &len);
    for(int i = 0; i < len; i++) scanf("%d", &n[i]);
    sort(n, n + len);
    len /= 2;
    len++;
    int sum = 0;
    for(int i = 0; i < len; i++){
        n[i] /= 2;
        n[i]++;
        sum += n[i];
    }
    printf("%d\n", sum);

    return 0;
}
