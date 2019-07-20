#include <bits/stdc++.h>
#define li 150005
#define le 150000
using namespace std;
struct info{
  int sum, pro;
}arr[4 * li];
int n[le], len;
void init(int nd, int b, int e){
  if(b == e){
    arr[nd].sum = n[b];
    if(n[b]) arr[nd].pro = 1;
    else arr[nd].pro = 0;
    return;
  }
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  init(l, b, m);
  init(r, m + 1, e);
  arr[nd].pro = arr[l].pro + arr[r].pro;
}
void update(int nd, int b, int e, int i, int v){
  if(b > i || e < i) return;
  if(b >= i && e <= i){
    arr[nd].sum = v;
    if(v) arr[nd].pro = 1;
    else arr[nd].pro = 0;
    return;
  }
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  update(l, b, m, i, v);
  update(r, m + 1, e, i, v);
  arr[nd].pro = arr[l].pro + arr[r].pro;
}
int fnc(int nd, int b, int e, int k){
  if(k > arr[nd].pro) return -1;
  if(b == e){
    int temp = arr[nd].sum;
    update(1, 0, le - 1, b, 0);
    return temp;
  }
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  if(arr[l].pro >= k) return fnc(l, b, m, k);
  else return fnc(r, m + 1, e, k - arr[l].pro);
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, a, q;
  char ch;
  for(scanf("%d", &t); t--; ){
    memset(n, 0, sizeof(n));
    for(int i = 0; i < 4 * li; arr[i].sum = arr[i].pro = 0, i++);
    scanf("%d %d", &len, &q);
    for(int i = 0; i < len; scanf("%d", &n[i]), i++);
    init(1, 0, le - 1);
    printf("Case %d:\n", ++co);
    while(q--){
      cin >> ch >> a;
      if(ch == 'a'){
        len++;
        update(1, 0, le - 1, len - 1, a);
      }
      else{
        int ans = fnc(1, 0, le - 1, a);
        if(ans == -1) printf("none\n");
        else printf("%d\n", ans);
      }
    }
    //printf("%d\n", arr[1].pro);
  }
  return 0;
}
