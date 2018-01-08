#include<stdio.h>

int main()
{
    int n, i, c, num, div;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num);
        c = 0;
        for(div = 1; div <= num; div++)
        {
            if(num % div == 0)
            {
                c++;
            }
        }
        if(c == 2)
        {
            printf("%d eh primo\n", num);
        }
        else
        {
            printf("%d nao eh primo\n", num);
        }
    }
    return 0;
}
