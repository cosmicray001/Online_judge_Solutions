#include <bits/stdc++.h>
#define le 1000010

using namespace std;
int n[le];

int main()
{
  int len;
  scanf("%d", &len);
  for(int i = 0; i < len; i++) scanf("%d", &n[i]);
  int ch = n[len - 1];
  int len1 = len;
  for(int i = len - 2; i >= 0; i--){
    ch = max(ch, n[i]);
    if(ch) len1--;
    ch--;
  }
  printf("%d\n", len1);
  
  return 0;
  
}
