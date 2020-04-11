#include <bits/stdc++.h>
#define le 100005
using namespace std;
struct info{
  int sum, pro;
}arr[4 * le];
int n[le];
void init(int nd, int b, int e){
  if(b == e){
    arr[nd].sum = 0;
    arr[nd].pro = 1;
    return;
  }
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  init(l, b, m);
  init(r, m + 1, e);
  arr[nd].pro = arr[l].pro + arr[r].pro;
}
void update(int nd, int b, int e, int i, int j, int v){
  if(b > j || e < i) return;
  if(b >= i && e <= j){
    arr[nd].sum = (arr[nd].sum + v) % 3;
    if(arr[nd].sum == 0) arr[nd].pro = (e - b + 1);
    else arr[nd].pro = 0;
    return;
  }
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  update(l, b, m, i, j, v);
  update(r, m + 1, e, i, j, v);
  arr[nd].pro = arr[l].pro + arr[r].pro;
}
int query(int nd, int b, int e, int i, int j, int c){
  if(b > j || e < i) return 0;
  if(b >= i && e <= j){
    if(arr[nd].sum + c % 3 == 0) return arr[nd].pro;
    else return 0;
  }
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  return query(l, b, m, i, j, c + arr[nd].sum) + query(r, m + 1, e, i, j, c + arr[nd].sum);
}
int main(){
  freopen("input.txt", "r", stdin);
  int t, co = 0, len, q, a, b, c;
  for(scanf("%d", &t); t--; ){
    for(int i = 0; i < 4 * le; arr[i].sum = arr[i].pro = 0, i++);
    scanf("%d %d", &len, &q);
    init(1, 0, len - 1);
    printf("Case %d:\n", ++co);
    while(q--){
      scanf("%d %d %d", &c, &a, &b);
      if(!c) update(1, 0, len - 1, a, b, 1);
      else printf("%d\n", query(1, 0, len - 1, a, b, 0));
    }
  }
  return 0;
}
