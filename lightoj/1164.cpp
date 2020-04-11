#include <bits/stdc++.h>
#define ll long long int
#define le 400005
using namespace std;
struct info{
  ll sum, pro;
}arr[le];
void update(int nd, int b, int e, int i, int j, ll v){
  if(b > j || e < i) return;
  if(b >= i && e <= j){
    arr[nd].sum += ((e - b + 1) * v);
    arr[nd].pro += v;
    return;
  }
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  update(l, b, m, i, j, v);
  update(r, m + 1, e, i, j, v);
  arr[nd].sum = arr[l].sum + arr[r].sum + (e - b + 1) * arr[nd].pro;
}
ll query(int nd, int b, int e, int i, int j, ll c){
  if(b > j || e < i) return 0;
  if(b >= i && e <= j) return arr[nd].sum + c * (e - b + 1);
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  ll v1 = query(l, b, m, i, j, c + arr[nd].pro);
  ll v2 = query(r, m + 1, e, i, j, c + arr[nd].pro);
  return v1 + v2;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, len, q, a, b, c;
  ll d;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &len, &q);
    memset(arr, 0, sizeof(arr));
    printf("Case %d:\n", ++co);
    while(q--){
      scanf("%d %d %d", &c, &a, &b);
      if(!c){
        scanf("%lld", &d);
        update(1, 0, len - 1, a, b, d);
      }
      else printf("%lld\n", query(1, 0, len - 1, a, b, 0));
    }
  }
  return 0;
}
