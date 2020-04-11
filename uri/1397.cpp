#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  int a, b;
  int f, s;
  while(scanf("%d", &t) != EOF && t){
    f = 0;
    s = 0;
    while(t--){
      scanf("%d %d", &a, &b);
      if(a > b) f++;
      else if(b > a) s++;
    }
    printf("%d %d\n", f, s);
  }
  
  return 0;
}
