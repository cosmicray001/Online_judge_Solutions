#include <bits/stdc++.h>
using namespace std;
int fnc(char ch){
  if(ch == 'A' || ch == 'P' || ch == 'R' || ch == 'O') return 0;
  if(ch == 'B' || ch == 'M' || ch == 'S') return 1;
  return 2;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, sum = 0, ct = 0, p;
  char ch[12];
  for(scanf("%d", &t); t--; ){
    scanf("%s", ch);
    p = fnc(ch[0]);
    sum += abs(p - ct);
    ct = p;
  }
  printf("%d\n", sum);
}
