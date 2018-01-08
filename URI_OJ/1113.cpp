#include<stdio.h>

int main()
{
    int i, x, y, f = 0;
    for(;f != 1; )
    {
        scanf("%d %d", &x, &y);
        if(x == y)
        {
            f = 1;
        }
        else if(x > y)
        {
            printf("Decrescente\n");
        }
        else if(x < y)
        {
            printf("Crescente\n");
        }
    }
    return 0;
}
