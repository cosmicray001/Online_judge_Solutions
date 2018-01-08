#include <iostream>
using namespace std;

int main() {
	char sc[20];
	double fsal, pro, fisal;
	scanf("%s %lf %lf", &sc, &fsal, &pro);
	fisal = (15*pro)/100 + fsal;
	printf("TOTAL = R$ %0.2lf\n", fisal);
	return 0;
}
