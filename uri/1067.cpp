#include <iostream>
using namespace std;

int main() {
	int n, c = 1;
	scanf("%d", &n);
	for(; c <= n; c++)
	{
		if(c % 2 == 1)
		{
			printf("%d\n", c);
		}
	}
	return 0;
}
