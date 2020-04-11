#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n1 = 0, n2 = 0;
  while(scanf("%d %d", &n1, &n2) != EOF){
    long long int fact1 = 1, fact2 = 1;
    if(n1 == 0){
      fact1 = fact1;
    }
    if(n2 == 0){
      fact2 = fact2;
    }
    
    if(n1 > 0){
      for(int i = n1; i >= 1; i--){
        fact1 = fact1 * i;
      }
    }
    if(n2 > 0){
      for(int i = n2; i >= 1; i--){
        fact2 = fact2 * i;
      }
    }
    
    printf("%lld\n", fact1 + fact2);
  }
  
  return 0;
}
