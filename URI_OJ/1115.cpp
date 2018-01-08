#include<stdio.h>

int main()
{
    int x, y, i, f = 1;
    for(; f != 0; )
    {
        scanf("%d %d", &x, &y);
        if(x == 0 || y == 0)
        {
            f = 0;
        }
        else
        {
            if(x > 0 && y > 0)
            {
                printf("primeiro\n");
            }
            else if(x > 0 && y < 0)
            {
                printf("quarto\n");
            }
            else if(x < 0 && y > 0)
            {
                printf("segundo\n");
            }
            else if(x < 0 && y < 0)
            {
                printf("terceiro\n");
            }
        }
    }
    return 0;
}
