#include <iostream>
using namespace std;

int main() {
	int x, c = 0;
	scanf("%d", &x);
	for(c = 0; c < 6; x++)
	{
		if( x % 2 == 1)
		{
			printf("%d\n", x);
		c++;
		}
	}
	return 0;
}
