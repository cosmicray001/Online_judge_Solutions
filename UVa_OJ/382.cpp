#include <bits/stdc++.h>
using namespace std;
int fnc(int a){
  int sum = 1;
  for(int i = 2; i < a; i++) if(a % i == 0) sum += i;
  if(a == 1) sum = 0;
  if(sum == a) return 0;
  else if(sum > a) return 1;
  return -1;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int a;
  printf("PERFECTION OUTPUT\n");
  while(scanf("%d", &a) != EOF && a){
    printf("%5d  ", a);
    int x = fnc(a);
    if(!x) printf("PERFECT\n");
    else if(x == 1) printf("ABUNDANT\n");
    else printf("DEFICIENT\n");
  }
  printf("END OF OUTPUT\n");
  return 0;
}
