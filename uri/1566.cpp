#include <bits/stdc++.h>

using namespace std;

int n[3000010];

int main()
{
    int t, len;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &len);
        for(int i = 0; i < len; i++) scanf("%d", &n[i]);

        sort(n, n + len);
        for(int i = 0; i < len - 1; i++) printf("%d ", n[i]);
        printf("%d\n", n[len - 1]);
    }

    return 0;
}
