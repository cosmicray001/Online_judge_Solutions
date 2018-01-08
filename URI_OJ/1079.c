#include<stdio.h>

int main()
{
    int t, i = 0;
    double x, y, z;
    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        scanf("%lf %lf %lf", &x, &y, &z);
        double avg = (x*2 + y*3 + z*5) / 10;
        printf("%0.1lf\n", avg);
    }
    return 0;
}
