#include <stdio.h>

int main(void) {
	double a, b, c, area_a, area_b, area_c, area_d, area_e, pi = 3.14159;
	scanf("%lf %lf %lf", &a, &b, &c);
	area_a = .5 * a * c;
	area_b = pi * c * c;
	area_c = .5 * (a + b) * c;
	area_d = b * b;
	area_e = a * b;
	printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n", area_a, area_b, area_c, area_d, area_e);
	return 0;
}
