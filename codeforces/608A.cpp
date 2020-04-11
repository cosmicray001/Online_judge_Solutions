#include <bits/stdc++.h>
#define le 1010

using namespace std;
int n[le];
int m[le];

int main()
{
  int len, b;
  int ht = 0, sum = 0;
  scanf("%d %d", &len, &b);
  int temp = b;
  for(int i = 0; i < len; i++) scanf("%d %d", &n[i], &m[i]);
  for(int i = len - 1; i >= 0; i--){
    ht += (temp - n[i]);
    temp = n[i];
    if(ht < m[i]){
      sum += (m[i] - ht);
      ht += (m[i] - ht);
    }
  }
  printf("%d\n", sum + b);
  
  return 0;
}
