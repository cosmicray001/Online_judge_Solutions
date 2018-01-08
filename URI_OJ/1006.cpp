#include<stdio.h>

int main()
{
	double a, b, c, avg;
	scanf("%lf %lf %lf", &a, &b, &c);
	avg = ((a*2) + (b*3) + (c*5)) / (2+3+5);
	printf("MEDIA = %0.1lf\n", avg);
	return 0;
}
