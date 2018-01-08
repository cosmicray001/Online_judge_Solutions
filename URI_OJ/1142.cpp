#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t = 0;
	while(scanf("%d", &t) == 1)
	{
		int x = 1;
		for(int y = 0; y < t; y++)
		{
			printf("%d %d %d PUM\n", x, x + 1, x + 2);
			x = x + 4;
		}
	}
	
	return 0;
}
