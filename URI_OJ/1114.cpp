#include<bits/stdc++.h>

using namespace std;

int main()
{
	int p = 0;
	while(scanf("%d", &p) == 1)
	{
		if(p == 2002)
		{
			printf("Acesso Permitido\n");
			break;
		}
		else
		{
			printf("Senha Invalida\n");
		}
	}
	
	return 0;
}
