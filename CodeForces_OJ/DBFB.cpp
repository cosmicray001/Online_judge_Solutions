#include <bits/stdc++.h>
#define le 100005
#define m 1e9 + 7
#define ll long long int
using namespace std;
int arr[le], arr1[le];
ll f[le];
int main(){
  int t, co = 0, len, n;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &len, &n);
    for(int i = 1; i < len + 1; scanf("%d", &arr[i]), i++);
    for(int i = 1; i < len + 1; scanf("%d", &arr1[i]), i++);
    ll ans = 0;
    for(int i = 1; i < len + 1; i++){
      for(int j = 1; j < len + 1; j++){
        for(int k = 0; k < n + 1; f[k] = 0, k++);
        f[1] += arr[i];
        f[2] += arr1[j];
        for(int k = 3; k < n + 1; k++){
          f[k] = (f[k - 1] + f[k - 2]) % 1000000007;
        }
        ans += f[n];
        ans %= 1000000007;
      }
    }
    printf("%d\n", ans);
  }
  return 0;
}
