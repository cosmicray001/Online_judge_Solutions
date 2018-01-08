#include<bits/stdc++.h>

using namespace std;

int main()
{
	double s = 0;
	for(int i = 1; i < 101; i++){
		s = s + (1 * 1.0 / i);
	}
	printf("%0.2lf\n", s);
	
	return 0;
}
