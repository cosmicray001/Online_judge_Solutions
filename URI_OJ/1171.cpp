#include <bits/stdc++.h>
#define le 2010

using namespace std;
int n[le];

int main()
{
  memset(n, 0, le);
  int len;
  scanf("%d", &len);
  for(int i = 0; i < len; i++){
    int x;
    scanf("%d", &x);
    n[x]++;
  }
  for(int i = 1; i < le; i++){
    if(n[i]) printf("%d aparece %d vez(es)\n", i, n[i]);
  }
  
  return 0;
}
