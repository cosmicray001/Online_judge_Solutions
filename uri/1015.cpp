#include <iostream>
#include<math.h>
using namespace std;

int main() {
	double x1, x2, y1, y2, dis;
	scanf("%lf %lf", &x1, &y1);
	scanf("%lf %lf", &x2, &y2);
	dis = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	printf("%0.4lf\n", dis);
	return 0;
}
