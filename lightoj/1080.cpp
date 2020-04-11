#include <bits/stdc++.h>
#define le 400005
using namespace std;
string s;
int arr[le];
void init(int nd, int b, int e){
  if(b == e){
    if(s[b] == '1') arr[nd] = 1;
    else arr[nd] = 0;
    return;
  }
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  init(l, b, m);
  init(r, m + 1, e);
}
void update(int nd, int b, int e, int i, int j){
  if(b > j || e < i) return;
  if(b >= i && e <= j){
    arr[nd] += 1;
    return;
  }
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  update(l, b, m, i, j);
  update(r, m + 1, e, i, j);
}
int query(int nd, int b, int e, int i, int c){
  if(b > i || e < i) return 0;
  if(b >= i && e <= i) return c + arr[nd];
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  return query(l, b, m, i, c + arr[nd]) + query(r, m + 1, e, i, c + arr[nd]);
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, a, b, q;
  char ch;
  for(scanf("%d", &t); t--; ){
    memset(arr, 0, sizeof(arr));
    cin >> s;
    scanf("%d", &q);
    int len = s.size();
    init(1, 0, len - 1);
    printf("Case %d:\n", ++co);
    while(q--){
      cin >> ch >> a;
      if(ch == 'I'){
        cin >> b;
        update(1, 0, len - 1, a - 1, b - 1);
      }
      else printf("%d\n", (query(1, 0, len - 1, a - 1, 0) % 2 == 0) ? 0 : 1);
    }
  }
  return 0;
}
