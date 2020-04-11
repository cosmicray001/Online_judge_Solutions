#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t = 0, x = 0, y = 0;
	while(scanf("%d", &t) == 1){
		for(int q = 0; q < t; q++){
			int sum = 0;
			scanf("%d %d", &x, &y);
			if(x % 2 == 0){
				x++;
			}
			for(int i = x, j = 0; j < y; i += 2, j++){
				sum = sum + i;
			}
			printf("%d\n", sum);
		}
		
	}
	
	return 0;
}
