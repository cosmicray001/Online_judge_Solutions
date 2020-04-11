#include<stdio.h>>


int main() {
	double in;
	scanf("%lf", &in);
	int x = (int) in;
	int hundred = in / 100;
	printf("NOTAS:\n%d nota(s) de R$ 100.00\n", hundred);

	int r = x % 100;
	int fifty = r / 50;
	printf("%d nota(s) de R$ 50.00\n", fifty);

	r = r % 50;
	int twenty = r / 20;
	printf("%d nota(s) de R$ 20.00\n", twenty);

	r = r % 20;
	int ten = r / 10;
	printf("%d nota(s) de R$ 10.00\n", ten);

	r = r % 10;
	int five = r / 5;
	printf("%d nota(s) de R$ 5.00\n", five);

	r = r % 5;
	int two = r / 2;
	printf("%d nota(s) de R$ 2.00\n", two);



	r = r % 2;
	int one = r / 1;
	printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n", one);

	// critical part

	double y = in - (int) in;
	double q = y * 100;
	int qq = (int) q / 50;

	printf("%d moeda(s) de R$ 0.50\n", qq);

	int e = (int) q % 50;
	int w = e / 25;
	printf("%d moeda(s) de R$ 0.25\n", w);


	e = e % 25;
	int t = e / 10;
	printf("%d moeda(s) de R$ 0.10\n", t);


	e = e % 10;
	int u = e / 5;
	printf("%d moeda(s) de R$ 0.05\n", u);


	e = e % 5;
	printf("%d moeda(s) de R$ 0.01\n", e);
	return 0;
}
