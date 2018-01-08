#include<bits/stdc++.h>

using namespace std;

int main()
{
	int x = 0;
	
	int f = 0,s = 1, t = f + s;
	while(scanf("%d", &x) == 1){
		if(x == 3){
			printf("%d %d %d\n", f, s, t);
		}
		
		else if(x == 2){
			printf("%d %d\n", f, s);
		}
		else if(x == 1){
			printf("%d\n", f);
		}
		else if(x > 3){
			printf("%d %d %d", f, s, t);
			for(int i = 1; i <= x - 3; i++){
				f = s;
				s = t;
				t = f + s;
				printf(" %d", t);
			}
			printf("\n");
		}
	}
	
	return 0;
}
