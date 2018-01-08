#include<stdio.h>

int main() {
	int s, e, c, sum, sum1 = 0, sum2 = 0;
	scanf("%d %d", &e, &s);
	for(c = s + 1; c < e; c++)
	{
		if(c < 0 && ((-1)*c) % 2 == 1)
        {
            sum1 = sum1 + c;
        }
		else if(c >= 0 && c % 2 == 1)
		{
			sum2 = sum2 + c;
		}
	}
	sum = sum1 + sum2;
	printf("%d\n", sum);
	return 0;
}
