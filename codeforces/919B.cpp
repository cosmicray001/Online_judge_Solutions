#include <bits/stdc++.h>
using namespace std;
bool fnc(int a){
  int sum = 0;
  for(; a > 0; a /= 10) sum = sum + (a % 10);
  return (sum == 10);
}
int main(){
  int a, co = 0;
  scanf("%d", &a);
  for(int i = 19; ; i++){
    if(fnc(i)) co++;
    if(co == a){
      printf("%d\n", i);
      return 0;
    }
  }
  return 0;
}
