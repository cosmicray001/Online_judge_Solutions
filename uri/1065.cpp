#include <iostream>
using namespace std;

int main() {
	int n, sum = 0, c = 0;
	for(c = 1; c <= 5; c++)
	{
		scanf("%d", &n);
		if(n % 2 == 0)
		{
			sum++;
		}
	}
	printf("%d valores pares\n", sum);
	return 0;
}
