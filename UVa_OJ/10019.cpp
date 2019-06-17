#include <bits/stdc++.h>
using namespace std;
int fnc(int a){
  int co = 0;
  for(; a > 0; a /= 2) if(a % 2 == 1) co++;
  return co;
}
int fnc1(int a){
  int co = 0;
  for(; a > 0; a /= 10){
    int r = a % 10;
    if(r == 1 || r == 2 || r == 4 || r == 8) co++;
    else if(r == 3 || r == 5 || r == 6 || r == 9) co += 2;
    else if(r == 7) co += 3;
  }
  return co;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, a;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &a);
    printf("%d %d\n", fnc(a), fnc1(a));
  }
  return 0;
}
