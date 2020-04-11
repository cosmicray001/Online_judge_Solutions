#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, n1;
  scanf("%d %d", &n, &n1);
  bool f = 0;
  if(n != n1) f = 1;
  printf("%d\n", f ? 2 : n);
  
  return 0;
}
