#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n = 0;
	while(scanf("%d", &n) == 1){
		int fac = 1;
		for(int i = 1; i <= n; i++){
			fac = fac * i;
		}
		printf("%d\n", fac);
	}
	
	return 0;
}
