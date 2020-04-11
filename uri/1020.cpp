#include <iostream>
using namespace std;

int main() {
	int inday, year, month, day;
	scanf("%d", &inday);
	year = inday / 365;
	month = (inday % 365) / 30;
	day = (inday % 365) % 30;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, day);
	return 0;
}
