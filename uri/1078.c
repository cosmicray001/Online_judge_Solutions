#include<stdio.h>

int main()
{
    int n, i = 0, m = 0;
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
    {
        m = m + n;
        printf("%d x %d = %d\n", i, n, m);
    }
    return 0;
}
