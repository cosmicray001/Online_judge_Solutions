#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, a, b, c;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d %d", &a, &b, &c);
    a += b;
    int sum = 0;
    while( a >= c){
      sum += a / c;
      a = (a / c) + a % c;
    }
    printf("%d\n", sum);
  }
  return 0;
}
