#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a;
  scanf("%d", &a);
  int x = a / 2;
  printf("%d\n", x);
  if(a % 2 == 0){
    for(int i = 0; i < x - 1; i++) printf("2 ");
    printf("2\n");
  }
  else{
    for(int i = 0; i < x - 1; i++) printf("2 ");
    printf("3\n");
  }
  
  return 0;
}
