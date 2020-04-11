#include <bits/stdc++.h>

using namespace std;

int main()
{
    int f;
    scanf("%d", &f);
    int need = (12 - f) * 45;
    int hav = 4 * 60;
    if(hav >= need) printf("YES\n");
    else printf("NO\n");

    return 0;
}
