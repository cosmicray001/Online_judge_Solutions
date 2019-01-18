#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int a, b;
  while(scanf("%d %d", &a, &b) != EOF){
    int sum = a;
    while(a >= b){
      sum += a / b;
      a = a / b + a % b;
    }
    printf("%d\n", sum);
  }
  return 0;
}
