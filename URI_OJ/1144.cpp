#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t = 0, a = 0, b = 0, c = 0;
	while(scanf("%d", &t) == 1){
		for(int i = 1; i <= t; i++){
			for(int j = 0; j < 2; j++){
				if(j == 0){
					a = i;
					b = a * a;
					c = b * a;
					printf("%d %d %d\n",a, b, c);
				}
				else if(j == 1){
					a = i;
					b = a * a;
					c = b * a;
					printf("%d %d %d\n", a, b + 1, c + 1);
				}
			}
		}
	}
	
	return 0;
}

