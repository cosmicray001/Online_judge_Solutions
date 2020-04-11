#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int a, b, co = 0;
  while(scanf("%d %d", &a, &b) != EOF && a && b){
    if(b + (b * 26) >= a){
      int re = a - b;
      re = (re + b - 1) / b;
      printf("Case %d: %d\n", ++co, (b >= a) ? 0 : re);
    }
    else printf("Case %d: impossible\n", ++co);
  }
  return 0;
}
