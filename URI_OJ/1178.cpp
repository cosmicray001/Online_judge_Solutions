#include<bits/stdc++.h>

using namespace std;

int main()
{
	double x = 0, n[100];
	int len = 100;
	while(scanf("%lf", &x) == 1){
		for(int i = 0; i < len; i++, x = x / 2.0){
			printf("N[%d] = %0.4lf\n", i, x);
		}
	}
	
	return 0;
}
