#include <iostream>
using namespace std;

int main() {
	int s, hr, min, sec;
	scanf("%d", &s);
	hr = s / 3600;
	min = (s % 3600) / 60;
	sec = (s % 3600) % 60;
	printf("%d:%d:%d\n", hr, min, sec);
	return 0;
}
