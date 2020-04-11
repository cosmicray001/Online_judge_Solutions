#include <bits/stdc++.h>
#define ll long long int
#define le 102
using namespace std;
int n[le];
int main(){
  //freopen("input.txt", "r", stdin);
  int t, len;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &len);
    for(int i = 0; i < len; i++) scanf("%d", &n[i]);
    sort(n, n + len);
    int a = 0, b = 0;
    for(int i = len - 1; i >= 0; i--){
      if(a > b) b += n[i];
      else a += n[i];
    }
    printf("%d\n", abs(a - b));
  }
  return 0;
}
