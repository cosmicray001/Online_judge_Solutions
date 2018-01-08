#include<stdio.h>

int main()
{
    int n, i, x = 2;
    scanf("%d", &n);
    //printf("%d\n", x);
    for(i = 1; i <= 10000; i++)
    {
        if(i % n == 2)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
