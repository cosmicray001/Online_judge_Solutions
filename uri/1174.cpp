#include<bits/stdc++.h>

using namespace std;

int main()
{
	double n[100];
	int len = 100;
	
	for(int i = 0; i < len; i++){
		scanf("%lf", &n[i]);
		
		if(n[i] <= 10){
			printf("A[%d] = %0.1lf\n", i, n[i]);
		}
	}
	
	return 0;
	
}
