#include <iostream>
using namespace std;

int main() {
	int n, c, e = 0, ne = 0, p = 0;
	for(c = 1; c <= 5; c++)
	{
		scanf("%d", &n);
		if(n % 2 == 0)
		{
			e++;
		}
		if(n > 0 && n != 0)
		{
			p++;
		}
		if(n < 0 && n != 0)
		{
			ne++;
		}
	}
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", e, 5 - e, p, ne);
	return 0;
}
