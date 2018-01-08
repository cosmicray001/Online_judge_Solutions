#include<stdio.h>

int main()
{
    int i, j, x, c;
    for(i = 1, j = 7; i <= 9; i += 2, j += 2)
    {
        for(x = j, c = 0; c < 3; x--, c++)
        {
            printf("I=%d J=%d\n", i, x);
        }
    }
    return 0;
}
