#include <bits/stdc++.h>


using namespace std;
int n[2];

int main()
{
  int len;
  while(scanf("%d", &len) != EOF && len){
    n[0] = 0;
    n[1] = 0;
    for(int i = 0; i < len; i++){
      int x;
      scanf("%d", &x);
      n[x]++;
    }
    printf("Mary won %d times and John won %d times\n", n[0], n[1]);
  }
  
  return 0;
}
