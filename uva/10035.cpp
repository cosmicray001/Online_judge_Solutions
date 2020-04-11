#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int a, b;
  while(scanf("%d %d", &a, &b) != EOF && (a || b)){
    int ans = 0, c = 0;
    while(a || b){
      if(a % 10 + b % 10 + c > 9){
        ans++;
        c = 1;
      }
      else c = 0;
      a /= 10;
      b /= 10;
    }
    if(ans > 1) printf("%d carry operations.\n", ans);
    else if(ans == 0) printf("No carry operation.\n");
    else printf("1 carry operation.\n");
  }
  return 0;
}
