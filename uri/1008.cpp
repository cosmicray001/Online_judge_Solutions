#include <iostream>
using namespace std;

int main() {
	int num;
	double hour, amount, salary;
	scanf("%d %lf %lf", &num, &hour, &amount);
	salary = amount * hour;
	printf("NUMBER = %d\nSALARY = U$ %0.2lf\n", num, salary);
	return 0;
}
