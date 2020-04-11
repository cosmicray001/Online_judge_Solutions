#include <bits/stdc++.h>
#define le 200005
using namespace std;
int n[le];
int main(){
  //freopen("input.txt", "r", stdin);
  int len, ans = 0, co = 1;
  scanf("%d", &len);
  for(int i = 0; i < len; scanf("%d", &n[i]), i++);
  sort(n, n + len);
  for(int i = 0; i < len; i++){
    if(n[i] >= co){
      ans++;
      co++;
    }
  }
  printf("%d\n", ans);
  return 0;
}
