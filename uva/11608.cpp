#include <bits/stdc++.h>
#define le 15
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int co = 0, n[le], m[le];
  while(scanf("%d", &n[0]) != EOF && n[0] >= 0){
    for(int i = 1; i < 12 + 1; scanf("%d", &n[i]), i++);
    printf("Case %d:\n", ++co);
    for(int i = 0; i < 12; i++){
      scanf("%d", &m[i]);
      if(n[i] >= m[i]){
        n[i + 1] += (n[i] - m[i]);
        printf("No problem! :D\n");
      }
      else{
        printf("No problem. :(\n");
        n[i + 1] += n[i];
      }
    }
  }
  return 0;
}
