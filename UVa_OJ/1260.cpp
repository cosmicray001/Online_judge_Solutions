#include <bits/stdc++.h>
#define le 1003
using namespace std;
int n[le];
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int t, len;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &len);
    for(int i = 0; i < len; scanf("%d", &n[i]), i++);
    int sum = 0;
    for(int i = 1; i < len; i++){
      for(int j = i - 1; j >= 0; j--){
        if(n[j] <= n[i]) sum++;
      }
    }
    printf("%d\n", sum);
  }
  return 0;
}
