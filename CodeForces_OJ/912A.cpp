#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long int a, b, x, y, z;
  scanf("%lld %lld", &a, &b);
  scanf("%lld %lld %lld", &x, &y, &z);
  long long int c1 = z * 3 + y;
  c1 = c1 - b;
  if(c1 < 0) c1 = 0;
  long long int c2 = x * 2 + y;
  c2 -= a;
  if(c2 < 0) c2 = 0;
  c1 += c2;
  printf("%lld\n", c1);
  
  return 0;
}
