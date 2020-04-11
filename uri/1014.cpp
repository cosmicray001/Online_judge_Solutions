#include <iostream>
using namespace std;

int main() {
	int path;
	double cost, uniCost;
	scanf("%d %lf", &path, &cost);
	uniCost = path / cost;
	printf("%0.3lf km/l\n", uniCost);	
	return 0;
}
