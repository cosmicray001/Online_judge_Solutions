#include<bits/stdc++.h>

using namespace std;

int main()
{
	int gas = 0, al = 0, ga = 0, di = 0;
	while(scanf("%d", &gas) == 1)
	{
		if(gas == 1)
		{
			al++;
		}
		else if(gas == 2)
		{
			ga++;
		}
		else if(gas == 3)
		{
			di++;
		}
		else if(gas == 4)
		{
			break;
		}
	}
	
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", al, ga, di);
	
	return 0;
}
