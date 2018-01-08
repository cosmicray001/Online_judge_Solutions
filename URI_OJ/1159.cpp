#include<bits/stdc++.h>

using namespace std;

int main()
{
	int x = 0;
	while(scanf("%d", &x) ==  1 && x != 0){
		int sum = 0;
		if(x % 2 != 0){
			x++;
		}
		for(int i = 0; i < 5; x += 2, i++){
			sum = sum + x;
		}
		printf("%d\n", sum);
	}
	
	return 0;
}
