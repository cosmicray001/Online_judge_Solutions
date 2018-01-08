#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n[3], m[3];
	
	for(int i = 0; i < 3; i++)
	{
		scanf("%d", &n[i]);
	}
	for(int i = 0; i < 3; i++)
	{
		m[i] = n[i];
	}
	
	for(int i =0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(m[i] < m[j])
			{
				int temp = m[i];
				m[i] = m[j];
				m[j] = temp;
			}
		}
	}
	
	for(int i = 0; i < 3; i++)
	{
		printf("%d\n", m[i]);
	}
	printf("\n");
	for(int i = 0; i < 3; i++)
	{
		printf("%d\n", n[i]);
	}
	
	return 0;
}
