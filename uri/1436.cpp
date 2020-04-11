#include <bits/stdc++.h>
#define le 13

using namespace std;
int n[le];

int main()
{
  int len, t, c = 0;
  scanf("%d", &t);
  while(t--){
    scanf("%d", &len);
    for(int i = 0; i < len; i++) scanf("%d", &n[i]);
    len /= 2;
    printf("Case %d: %d\n", ++c, n[len]);
  }
  
  return 0;
}
