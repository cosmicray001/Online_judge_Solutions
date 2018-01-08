#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a = 0, b = 0;
	while(scanf("%d %d", &a, &b) == 2){
		if(a > b){
			int temp = a;
			a = b;
			b = temp;
		}
		if(b % a == 0){
			printf("Sao Multiplos\n");
		}
		
		else{
			printf("Nao sao Multiplos\n");
		}
	}
	
	return 0;
}
