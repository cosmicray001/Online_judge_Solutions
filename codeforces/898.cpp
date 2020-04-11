#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  scanf("%d", &n);
  int re = n % 10;
  if(re == 0) printf("%d\n", n);
  else{
    if(re <= 5){
      n -= re;
    }
    else n += (10 - re);
    printf("%d\n", n);
  }
  return 0;
}
