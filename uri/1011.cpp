#include <iostream>
using namespace std;

int main() {
	double rad, pi = 3.14159, vol;
	scanf("%lf", &rad);
	vol = (4 / 3.0) * pi * rad*rad*rad;
	printf("VOLUME = %0.3lf\n", vol);
	return 0;
}
