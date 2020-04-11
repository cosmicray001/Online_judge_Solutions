#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n[10];
	for(int i = 0; i < 10; i++)
	{
		scanf("%d", &n[i]);
		if(n[i] <= 0)
		{
			n[i] = 1;
		}
	}
	for(int i = 0; i < 10; i++)
	{
		printf("X[%d] = %d\n", i, n[i]);
	}
	
	return 0; 
}
