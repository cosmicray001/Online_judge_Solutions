#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, mul, i, r;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        mul = 1;
        for(r = 0; r < 2; r++)
        {
            mul = mul * i;
            printf("%d ", mul);
        }
        mul = mul * i;
        printf("%d\n", mul);
    }
    return 0;
}
