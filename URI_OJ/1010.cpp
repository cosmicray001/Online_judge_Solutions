#include <iostream>
using namespace std;

int main() {
	int proCode_a, proCode_b, uni_a, uni_b;
	double pri_a, pri_b, total_pri;
	scanf("%d %d %lf", &proCode_a, &uni_a, &pri_a);
	scanf("%d %d %lf", &proCode_b, &uni_b, &pri_b);
	total_pri = uni_a*pri_a + uni_b*pri_b;
	printf("VALOR A PAGAR: R$ %0.2lf\n", total_pri);
	return 0;
}
