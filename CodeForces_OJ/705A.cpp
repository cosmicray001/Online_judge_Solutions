#include <bits/stdc++.h>
using namespace std;
int main(){
  int a;
  scanf("%d", &a);
  printf("I hate");
  for(int i = 0; i < a - 1; i++){
    printf(" that");
    if(i % 2 == 0) printf(" I love");
    else printf(" I hate");
  }
  printf(" it\n");
  return 0;
}
