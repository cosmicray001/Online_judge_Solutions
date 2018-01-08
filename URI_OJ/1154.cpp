#include<bits/stdc++.h>

using namespace std;

int main()
{
	int o = 0;
	double age = 0, sum = 0, avg = 0;
	while(scanf("%lf", &age) == 1){
		if(age < 0){
			break;
		}
		sum = sum + age;
		o++;
	}
	avg = sum / o;
	printf("%0.2lf\n", avg);
	
	return 0;
}
