#include <iostream>
using namespace std;

int main() {
	int cash, hundred, fifty, twenty, ten, five, two, one;
	scanf("%d", &cash);
	hundred = cash / 100;
	fifty = (cash%100) / 50;
	twenty = ((cash%100)%50) / 20;
	ten = (((cash%100)%50)%20) / 10;
	five = ((((cash%100)%50)%20)%10) / 5;
	two = (((((cash%100)%50)%20)%10)%5) / 2;
	one = (((((cash%100)%50)%20)%10)%5) % 2;
	printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", cash, hundred, fifty, twenty, ten, five, two, one);
	return 0;
}
