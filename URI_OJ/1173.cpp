#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n[10];
	int t = 0;
	int len = 10;
	
	while(scanf("%d", &t) == 1){
		for(int i = 0; i < len; i++, t = t + t){
			printf("N[%d] = %d\n", i, t);
		}
	}
	
	return 0;
}
