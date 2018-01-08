#include<bits/stdc++.h>

using namespace std;

int main()
{
	double n[3], m[3];
	int len = 3;
	
	for(int i = 0; i < len; i++){
		scanf("%lf", &n[i]);
	}
	
	for(int i = 0; i < len; i++){
		m[i] = n[i];
	}
	
	for(int i = 0; i < len; i++){
		for(int j = i + 1; j < len; j++){
			if(m[i] < m[j]){
				double temp = m[i];
				m[i] = m[j];
				m[j] = temp;
			}
		}
	}
	
	if(m[0] < m[1] + m[2]){
		printf("Perimetro = %0.1lf\n", n[0] + n[1] + n[2]);
	}
	
	else{
		printf("Area = %0.1lf\n", (n[0] + n[1])*(.5)*n[2]);
	}
	
	
	return 0;
}
