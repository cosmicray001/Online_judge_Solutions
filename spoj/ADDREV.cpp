#include <bits/stdc++.h>

using namespace std;

int fnc(int n)
{
  int rev = 0;
  for(; n > 0; n /= 10){
    rev = (rev * 10) + (n % 10);
  }
  return rev;
}


int main()
{
  int t;
  int a, b;
  scanf("%d", &t);
  while(t--){
    scanf("%d %d", &a, &b);
    a = fnc(a);
    b = fnc(b);
    int x = a + b;
    x = fnc(x);
    printf("%d\n", x);
  }
  
  return 0;
}
