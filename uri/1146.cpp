#include<stdio.h>

int main()
{
    int n, i, f = 1;
    for(; f != 0; )
    {
        scanf("%d", &n);
        if(n == 0)
        {
            f = 0;
        }
        else
        {
            for(i = 1; i < n; i++)
            {
                printf("%d ", i);
            }
            printf("%d\n", n);
        }
    }
    return 0;
}
