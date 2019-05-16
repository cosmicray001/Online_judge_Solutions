#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, sum = 0;
  for(int i = 0; i < 3; i++){
    scanf("%d", &a);
    sum = (sum * 10) + a;
  }
  printf("%s\n", (sum % 4 == 0) ? "YES" : "NO");
  return 0;
}
