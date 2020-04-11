#include <iostream>
using namespace std;

int main() {
	int n = 0, i = 0, l = 0;
	scanf("%d %d %d", &n, &i,&l);
	if( n > i && n > l)
	{
		printf("%d eh o maior\n", n);
	}
	else if(i > n && i > l)
	{
		printf("%d eh o maior\n", i);
	}
	else
	{
		printf("%d eh o maior\n", l);
	}
	return 0;
}
