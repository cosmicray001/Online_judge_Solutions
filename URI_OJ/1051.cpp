#include<bits/stdc++.h>

using namespace std;

int main()
{
	double pay = 0.0;
	while(scanf("%lf", &pay) == 1){
		if(pay > 4500.00){
			double x = pay - 4500.00;
			printf("R$ %0.2lf\n", ((x*28)/100.00 + 270 + 80));
		}
		else if(pay > 3000.00){
			double x = pay - 3000.00;
			printf("R$ %0.2lf\n", ((x*18)/100.00 + 80));
		}
		else if(pay > 2000.00){
			double x = pay - 2000.00;
			printf("R$ %0.2lf\n", ((x*8)/100));
		}
		else if(pay >= 0.00 && pay <= 2000.00){
			printf("Isento\n");
		}
	}
	
	return 0;
}
