#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        int count = 0, div = 0;
        for(div = 1; div < num; div++)
        {
            if(num % div == 0)
            {
                count = count + div;
            }
        }
        if(count == num)
        {
            printf("%d eh perfeito\n", num);
        }
        else
        {
            printf("%d nao eh perfeito\n", num);
        }
    }
    return 0;
}
