#include<stdio.h>

int main()
{
    int n, div;
    scanf("%d", &n);
    for(div = 1; div <= n; div++)
    {
        if(n % div == 0)
        {
            printf("%d\n", div);
        }
    }
    return 0;
}
