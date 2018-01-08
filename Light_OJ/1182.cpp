#include <bits/stdc++.h>
 
using namespace std;
 
bool fnc(long long int n){
  long long int sum = 0;
  for(; n > 0; n /= 2){
    if(n % 2 == 1) sum++;
  }
  if(sum % 2 == 0) return 1;
  else return 0;
}
 
int main()
{
  int t, c = 0;
  scanf("%d", &t);
  long long int n;
  while(t--){
    scanf("%lld", &n);
    bool f = fnc(n);
    printf("Case %d: %s\n", ++c, f ? "even" : "odd");
  }
 
  return 0;
}
