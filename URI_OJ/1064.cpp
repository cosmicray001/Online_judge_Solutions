#include <iostream>
using namespace std;

int main() {
	double n, sum = 0, avg;
	int  c, div = 0;
	for(c = 1; c <= 6; c++)
	{
		scanf("%lf", &n);
		if(n > 0 && n != 0)
		{
			sum = sum + n;
			div++;
		}
	}
	avg = sum / div;
	printf("%d valores positivos\n%0.1lf\n", div, avg);
	return 0;
}
