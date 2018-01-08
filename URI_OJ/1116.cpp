#include<stdio.h>

int main()
{
    double x, y;
    int n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%lf %lf", &x, &y);
        if(y == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%0.1lf\n", x / y);
        }
    }
    return 0;
}
