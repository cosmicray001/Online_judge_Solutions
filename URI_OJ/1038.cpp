#include <iostream>
using namespace std;

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	double pri1 = 4.00, pri2 = 4.50, pri3 = 5.00, pri4 = 2.00, pri5 = 1.50;
	double pri;
	if(x == 1)
	{
		pri = pri1;
	}
	
	else if(x == 2)
	{
		pri = pri2;
	}

	else if(x == 3)
	{
		pri = pri3;
	}

	else if(x == 4)
	{
		pri = pri4;
	}

	else if(x == 5)
	{
		pri = pri5;
	}

	printf("Total: R$ %0.2lf\n", pri * y);
	return 0;
}
