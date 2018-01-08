#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t, co = 0, a, b;
  scanf("%d", &t);
  while(t--){
    scanf("%d %d", &a, &b);
    printf("Case %d: %d\n", ++co, a + b);
  }
  
  return 0;
}
