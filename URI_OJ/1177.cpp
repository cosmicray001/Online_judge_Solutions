#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n[1000], t = 0, j = 0;
	
	while(scanf("%d", &t) == 1){
		for(int i = 0, j = 0; j < 1000; i++, j++){
			if(i == t){
				i = 0;
			}
			printf("N[%d] = %d\n", j, i);
			
		}
	}
	
	return 0;
}
