#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, a;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &a);
    printf("Case #%d: %d", ++co, a);
    int co = 0;
    for(int i = 2; i < a; i++){
      if(a % i == 0){
        printf(" = %d * %d", i, a / i);
        co++;
      }
      if(co == 2) break;
    }
    printf("\n");
  }
  return 0;
}
