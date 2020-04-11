#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n = 0;
	scanf("%d", &n);
	int m[n], len = n;
	scanf("%d", &m[0]);
	int lo = m[0], po = 0;
	
	for(int i = 1; i < len; i++){
		scanf("%d", &m[i]);
		if(m[i] < lo){
			lo = m[i];
			po = i;
		}
	}
	
	printf("Menor valor: %d\nPosicao: %d\n", lo, po);
	
	return 0;
}
