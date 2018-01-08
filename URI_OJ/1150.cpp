#include<bits/stdc++.h>

using namespace std;

int main()
{
	int x = 0, z = 0;
	
	while(scanf("%d", &x) == 1){
		while(scanf("%d", &z) == 1){
			if(z > x){
				break;
			}
		}
		int sum = 0, i = 0;
		for(i = 0; sum <= z; i++, x++){
			
			sum = sum + x;
		}
		printf("%d\n", i);
	}
	
	return 0;
}

