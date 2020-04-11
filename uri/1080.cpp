#include<stdio.h>

int main()
{
    int n1, n, max, i = 0, p;
    scanf("%d", &n1);
    max = n1;
    int x = 1;
    for(i = 1; i < 100; i++)
    {
        scanf("%d", &n);
        x++;
        if(n > max)
        {
            max = n;
            p = x;
        }


    }
    printf("%d\n%d\n", max, p);
    return 0;
}
