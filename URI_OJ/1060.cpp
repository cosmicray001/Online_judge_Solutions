#include <iostream>
using namespace std;

int main() {
	double n = 0;
	int c = 0, m = 0;
	for(c = 1; c <= 6; c++)
	{
		scanf("%lf", &n);
		if(n > 0)
		{
			m = m + 1;	
		}
	}
	printf("%d valores positivos\n", m);
	return 0;
}
