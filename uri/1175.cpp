#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n[20], t = 0;
	int len = 20;
	for(int i = 0; i < len; i++){
		scanf("%d", &n[i]);
	}
	int j = 0;
	for(int i = 0, j = 19; i < len / 2; i++, j--){
		int temp = n[i];
		n[i] = n[j];
		n[j] = temp;
	}
	
	for(int i = 0; i < len; i++){
		printf("N[%d] = %d\n", i, n[i]);
	}
	
	return 0;
}
