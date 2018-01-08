#include<stdio.h>

int main()
{
    int i;
    double mark, sum = 0;
    for(i = 0; i < 2; )
    {
        scanf("%lf", &mark);
        if(mark >= 0 && mark <= 10)
        {
            sum = sum + mark;
            i++;
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    printf("media = %0.2lf\n", sum / 2.0);
    return 0;
}
