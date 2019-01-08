#include <bits/stdc++.h>
#define le 502
using namespace std;
int n[le];
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int t, len;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &len);
    for(int i = 0; i < len; scanf("%d", &n[i]), i++);
    int sum = INT_MAX;
    for(int i = 0; i < len; i++){
      int m = 0;
      for(int j = 0; j < len; j++) m += abs(n[i] - n[j]);
      sum = min(sum, m);
    }
    printf("%d\n", sum);
  }
  return 0;
}
