#include<bits/stdc++.h>

using namespace std;

int main()
{
	double a = 0, b = 0;
	int x = 0;
	for(; ; )
	{
		while(scanf("%lf", &a) == 1)
		{
			if(a >= 0 && a <= 10)
			{
				break;
			}
			else
			{
				printf("nota invalida\n");
			}
		}
		
		while(scanf("%lf", &b) == 1)
		{
			if(b >= 0 && b <= 10)
			{
				break;
			}
			else
			{
				printf("nota invalida\n");
			}
		}
		
		printf("media = %0.2lf\n", (a + b) / 2.0);
		
		while(scanf("%d", &x) == 1)
		{
			printf("novo calculo (1-sim 2-nao)\n");
			if(x >= 1 && x <= 2)
			{
				break;
			}
		}
		
		if(x == 2)
		{
			break;
		}
		
	}
	
	return 0;
}
