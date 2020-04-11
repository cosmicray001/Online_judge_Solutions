#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  double e;
  scanf("%d", &t);
  while(t--){
    scanf("%lf", &e);
    int c = 0;
    for(; e > 1; e /= 2) c++;
    printf("%d dias\n", c);
  }
  
  return 0;
}
