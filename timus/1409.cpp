#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int h, l;
    scanf("%d %d", &h, &l);
    int t = h + l - 1;
    printf("%d %d\n", t - h, t - l);

    return 0;
}
