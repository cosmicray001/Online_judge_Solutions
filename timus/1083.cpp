#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, m = 0;
    char ch[21];
    scanf("%d", &n);
    scanf("%s", ch);
    int len = strlen(ch);
    int fact = 1;
    for(; n - m >= 1; m += len) fact *= n - m;
    printf("%d\n", fact);
    return 0;
}
