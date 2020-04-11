#include<bits/stdc++.h>

using namespace std;

int main()
{
	int x = 0, y = 0;
	while(scanf("%d %d", &x, &y) == 2){
		for(int i = 1; i <= y; i++){
			for(int j = 0; j < x - 1; j++, i++){
				printf("%d ", i);
			}
			printf("%d\n", i);
		}
	}
	
	return 0;
}
