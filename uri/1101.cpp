#include<stdio.h>

int main()
{
    int i, x, y, sum, temp, flag = 0;
    for(; flag != 1; )
    {
        scanf("%d %d", &x, &y);
        if(x <= 0 || y <= 0)
        {
            flag = 1;
        }
        else
        {
            if(x > y)
            {
                temp = y;
                y = x;
                x = temp;
            }
            sum = 0;
            for(i = x; i <= y; i++)
            {
                printf("%d ", i);
                sum = sum + i;
            }
            printf("Sum=%d\n", sum);
        }
    }
    return 0;
}
