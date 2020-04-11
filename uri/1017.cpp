#include <iostream>
using namespace std;

int main() {
	int ti, speed;
	double spend;
	scanf("%d %d", &ti, &speed);
	spend = (ti*speed) / 12.0;
	printf("%0.3lf\n", spend);
	return 0;
}
