#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long int a, b;
  while(scanf("%lld %lld", &a, &b) != EOF){
    if(a < b){
      long long int temp = a;
      a = b;
      b = temp;
    }
    printf("%lld\n", a - b);
  }
  
  return 0;
}
