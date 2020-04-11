#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	int temp = b, sum = 0;
	while(temp--){
		scanf("%d", &c);
		c += sum;
		if(c > a) sum  = c - a;
		else sum = 0;
	}
	printf("%d\n", sum);

	return 0;
}
