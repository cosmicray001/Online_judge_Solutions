#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
  int t, c = 0;
  int x, y, a, b;
  scanf("%d", &t);
  while(t--){
    scanf("%d %d %d %d", &x, &y, &a, &b);
    bool f = false;
    int a1 = (x + y) % 2;
    int a2 = (a + b) % 2;
    if(a1 != a2) printf("Case %d: impossible\n", ++c);
    else{
      if(a1) f = true;
      int ch = abs(x - a);
      int ch1 = abs(y - b);
      if(ch == ch1) printf("Case %d: 1\n", ++c);
      else printf("Case %d: 2\n", ++c);
    }
  }
}
