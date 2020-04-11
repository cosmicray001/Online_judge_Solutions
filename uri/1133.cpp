#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a = 0, b = 0;
	while(scanf("%d %d", &a, &b) == 2)
	{
		if(a > b)
		{
			int temp = a;
			a = b;
			b = temp;
		}
		for(int i = a + 1; i < b; i++)
		{
			if(i % 5 == 2 || i % 5 == 3)
			{
				printf("%d\n", i);
			}
		}
	}
	
	return 0;
}
