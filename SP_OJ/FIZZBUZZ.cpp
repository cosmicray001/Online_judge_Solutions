#include <stdio.h>
int main(){
  int t; long long a; scanf("%d", &t); while(t--){scanf("%lld", &a); if(a % 5 == 0 && a % 7 == 0){printf("fizzbuzz\n");} else if(a % 5 == 0){printf("fizz\n");} else if(a % 7 == 0){printf("buzz\n");}else{printf("%lld\n",a);}} 
  return 0;
}
