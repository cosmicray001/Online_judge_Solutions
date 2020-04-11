#include <bits/stdc++.h>
#define le 103
#define ll long long int
using namespace std;
ll n[le][le];
int ve[le];
int main(){
  //freopen("input.txt", "r", stdin);
  int e, len;
  scanf("%d %d", &e, &len);
  for(int i = 0; i < len; scanf("%d", &ve[i]), i++);
  for(int i = 0; i < e; i++){
    for(int j = 0; j < e; j++) scanf("%lld", &n[i][j]);
  }
  for(int i = 0; i < len; i++){
    for(int j = 0; j < len; j++){
      int p = ve[i] - 1, q = ve[j] - 1;
      n[p][q] = 0;
    }
  }
  for(int k = 0; k < e; k++){
    for(int i = 0; i < e; i++){
      for(int j = 0; j < e; j++){
        n[i][j] = min(n[i][j], n[i][k] + n[k][j]);
      }
    }
  }
  ll ans = 0;
  for(int i = 0; i < e; i++){
    ll sum = INT_MAX;
    for(int j = 0; j < len; j++) sum = min(sum, n[i][ve[j] - 1]);
    ans += sum;
  }
  printf("%lld\n", ans);
  return 0;
}
