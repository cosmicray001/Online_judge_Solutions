#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int a;
  while(scanf("%d", &a) != EOF && a){
    int sum = 0;
    while(a >= 3){
      sum += a / 3;
      a = a / 3 + a % 3;
    }
    if(a == 2) sum++;
    printf("%d\n", sum);
  }
  return 0;
}
