#include <bits/stdc++.h>
#define le 1000006
using namespace std;
bool n[le];
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int a, x, y, z, x1, y1, z1;
  while(scanf("%d", &a) != EOF){
    memset(n, 0, sizeof(n));
    int co = 0;
    for(int i = 1; i * i <= a + 1; i++){
      for(int j = i + 1; j * j <= a + 1; j += 2){
        if(__gcd(i, j) == 1){
          x = j * j - i * i;
          y = 2 * i * j;
          z = i * i + j * j;
          if(z > a) break;
          x1 = x;
          y1 = y;
          z1 = z;
          while(z1 <= a){
            n[x1] = n[y1] = n[z1] = true;
            x1 += x;
            y1 += y;
            z1 += z;
          }
          co++;
        }
      }
    }
    int ans = a;
    for(int i = 1; i < a + 1; i++){
      if(n[i]) ans--;
    }
    printf("%d %d\n", co, ans);
  }
  return 0;
}
