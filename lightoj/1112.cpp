#include <bits/stdc++.h>
#define le 400005
#define li 100005
#define ll long long int
using namespace std;
ll arr[le], n[le];
void init(int nd, int b, int e){
  if(b == e){
    arr[nd] = n[b];
    return;
  }
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  init(l, b, m);
  init(r, m + 1, e);
  arr[nd] = arr[l] + arr[r];
}
ll query(int nd, int b, int e, int i, int j){
  if(b > j || e < i) return 0;
  if(b >= i && e <= j) return arr[nd];
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  ll v1 = query(l, b, m, i, j);
  ll v2 = query(r, m + 1, e, i, j);
  return v1 + v2;
}
void update(int nd, int b, int e, int i, ll v){
  if(b > i || e < i) return;
  if(b >= i && e <= i){
    printf("%lld\n", arr[nd]);
    arr[nd] = v;
    return;
  }
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  update(l, b, m, i, v);
  update(r, m + 1, e, i, v);
  arr[nd] = arr[l] + arr[r];
}
void up(int nd, int b, int e, int i, ll v){
  if(b > i || e < i) return;
  if(b >= i && e <= i){
    arr[nd] += v;
    return;
  }
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  up(l, b, m, i, v);
  up(r, m + 1, e, i, v);
  arr[nd] = arr[l] + arr[r];
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, len, q, a, b, c;
  ll d;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &len, &q);
    for(int i = 0; i < len; scanf("%lld", &n[i]), i++);
    init(1, 0, len - 1);
    printf("Case %d:\n", ++co);
    while(q--){
      scanf("%d", &a);
      if(a == 1){
        scanf("%d", &b);
        update(1, 0, len - 1, b, 0);
      }
      else if(a == 2){
        scanf("%d %lld", &b, &d);
        up(1, 0, len - 1, b, d);
      }
      else{
        scanf("%d %d", &b, &c);
        printf("%lld\n", query(1, 0, len - 1, b, c));
      }
    }
  }
  return 0;
}
