#include<bits/stdc++.h>

using namespace std;

int main()
{
	double s = 1;
	
	for(int i = 3, j = 2; i < 40; i += 2, j = j * 2){
		s = s + (i * 1.0 / j);
	}
	printf("%0.2lf\n", s);
	
	return 0;
}
