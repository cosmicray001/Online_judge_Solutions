#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a = 0, b = 0;
	while(scanf("%d %d", &a, &b) == 2)
	{
		int sum = 0;
		if(a > b)
		{
			int temp = a;
			a = b;
			b = temp;
		}
		for(int i = a; i <= b; i++)
		{
			if(i % 13 != 0)
			{
				sum = sum + i;
			}
		}
		printf("%d\n", sum);
	}
	
	return 0;
}
