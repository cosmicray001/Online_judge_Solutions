#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, ans = 0, t = 0;
  scanf("%d", &a);
  if(a >= 100){
    ans = a / 100;
    a = a % 100;
  }
  if(a >= 20){
    ans += (a / 20);
    a = a % 20;
  }
  if(a >= 10){
    ans += (a / 10);
    a = a % 10;
  }
  if(a >= 5){
    ans += (a / 5);
    a = a % 5;
  }
  if(a >= 1) ans += a;
  printf("%d\n", ans);
  return 0;
}
