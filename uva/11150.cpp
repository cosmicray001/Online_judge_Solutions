#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int a;
  while(scanf("%d", &a) != EOF){
    int ans = a;
    while(a >= 3){
      ans += a / 3;
      a = a / 3 + a % 3;
    }
    if(a == 2) ans++;
    printf("%d\n", ans);
  }
  return 0;
}
