#include <iostream>
using namespace std;

int main() {
	int n, c, x, y = 0, z = 0;
	scanf("%d", &n);
	for(c = 1; c <= n; c++)
	{
		scanf("%d", &x);
		if(x >= 10 && x <= 20)
		{
			y++;
		}
		else
		{
			z++;
		}
	}
	printf("%d in\n%d out\n", y, z);
	return 0;
}
