#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int len, m, g, a;
  while(scanf("%d", &len) != EOF && len){
    scanf("%d", &m);
    g = m;
    for(int i = 0; i < len - 1; i++){
      scanf("%d", &a);
      m = max(a, m + a);
      g = max(g, m);
    }
    if(g > 0) printf("The maximum winning streak is %d.\n", g);
    else printf("Losing streak.\n");
  }
  return 0;
}
