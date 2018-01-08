#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    double a, b, c, r, x, y;
    scanf("%lf %lf %lf", &a, &b, &c);
    x = pow(b , 2) -(4 * a * c);
    if(a == 0 || x < 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        r = (- b + sqrt(x) ) / (2 * a);
        y = (- b - sqrt(x) ) / (2 * a);
        printf("R1 = %0.5lf\nR2 = %0.5lf\n", r, y);
    }
    return 0;
}
