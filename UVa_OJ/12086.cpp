#include <bits/stdc++.h>
#define le 800005
#define li 200005
using namespace std;
int arr[le], n[li];
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
int query(int nd, int b, int e, int i, int j){
  if(b > j || e < i) return 0;
  if(b >= i && e <= j) return arr[nd];
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  int v1 = query(l, b, m, i, j);
  int v2 = query(r, m + 1, e, i, j);
  return v1 + v2;
}
void update(int nd, int b, int e, int i, int v){
  if(b > i || e < i) return;
  if(b >= i && e <= i){
    arr[nd] = v;
    return;
  }
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  update(l, b, m, i, v);
  update(r, m + 1, e, i, v);
  arr[nd] = arr[l] + arr[r];
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int len, a, b, co = 0, x;
  while(scanf("%d", &len) != EOF && len){
    if(co) printf("\n");
    printf("Case %d:\n", ++co);
    for(int i = 1; i < len + 1; scanf("%d", &n[i]), i++);
    init(1, 1, len);
    char ch, ch1[5];
    while(1){
      cin >> ch;
      if(ch != 'E'){
        cin >> a >> b;
        if(ch == 'M') printf("%d\n", query(1, 1, len, a, b));
        else update(1, 1, len, a, b);
      }
      else{
        cin >> ch1;
        break;
      }
    }
  }
  return 0;
}
