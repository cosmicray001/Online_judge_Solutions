#include<stdio.h>

int main()
{
    int i, n, c, sp, ep;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &sp, &ep);
        if(sp < ep)
        {
            int sum = 0;
            for(c = sp + 1; c < ep; c++)
            {
                if(c % 2 == 1)
                {
                    sum = sum + c;
                }
            }
            printf("%d\n", sum);
        }

        else
        {
            int sum = 0;
            for(c = ep + 1; c < sp; c++)
            {
                if(c % 2 == 1)
                {
                    sum = sum + c;
                }
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}
