#include <bits/stdc++.h>

using namespace std;

bool fnc(long long int a, long long int b)
{
  bool f = 1;
  int c = 0;
  if(b > a) return 0;
  else{
    for(; b > 0; b /= 10, a /= 10){
      if(b % 10 != a % 10){
        f = 0;
        break;
      }
    }
    return f ? 1 : 0;
  }
}

int main()
{
  int t;
  long long int a, b;
  scanf("%d", &t);
  while(t--){
    scanf("%lld %lld", &a, &b);
    bool f = fnc(a, b);
    printf("%s\n", f ? "encaixa" : "nao encaixa");
  }
  
  return 0;
}
