#include <iostream>
using namespace std;

int main() {
	int n , c, x;
	scanf("%d", &n);
	for(c = 1; c <= n; c++)
	{
		scanf("%d", &x);
		if(x % 2 == 0 && x > 0 && x != 0)
		{
			printf("EVEN POSITIVE\n");
		}
		else if(x % 2 == 0 && x < 0 && x != 0)
		{
			printf("EVEN NEGATIVE\n");
		}
		else if(x % 2 == 1 && x > 0 && x != 0)
		{
			printf("ODD POSITIVE\n");
		}
		else if(x % 2 != 0 && x < 0 && x != 0)
		{
			printf("ODD NEGATIVE\n");
		}
		else if(x == 0)
		{
			printf("NULL\n");
		}
	}
	return 0;
}
