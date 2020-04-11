#include <bits/stdc++.h>
#define le 200005
using namespace std;
int n[le];
int main(){
  //freopen("input.txt", "r", stdin);
  int len, t, c;
  scanf("%d %d %d", &len, &t, &c);
  for(int i = 0; i < len; scanf("%d", &n[i]), i++);
  int ans = 0, l = 0;
  for(int i = 0; i < len; i++){
    if(n[i] > t){
      if(l >= c) ans += (l - c + 1);
      l = 0;
    }
    else l++;
  }
  if(l >= c) ans += (l - c + 1);
  printf("%d\n", ans);
  return 0;
}
