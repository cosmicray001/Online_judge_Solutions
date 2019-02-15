#include <bits/stdc++.h>
#define le 400005
#define li 100005
using namespace std;
int n[li];
pair<int, int> arr[le];
void init(int nd, int b, int e){
  if(b == e){
    arr[nd].first = 1;
    arr[nd].second = n[e];
    return;
  }
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  init(l, b, m);
  init(r, m + 1, e);
  if(arr[l].second == arr[r].second){
    arr[nd].second = arr[l].second;
    arr[nd].first = arr[l].first + arr[r].first;
  }
  else if(arr[l].first > arr[r].first){
    arr[nd].first = arr[l].first;
    arr[nd].second = arr[l].second;
  }
  else{
    arr[nd].first = arr[r].first;
    arr[nd].second = arr[r].second;
  }
  return;
}
int query(int nd, int b, int e, int i, int j){
  if(b > j || e < i) return -1;
  if(b >= i && e <= j) return arr[nd].first;
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  int v1 = query(l, b, m, i, j);
  int v2 = query(r, m + 1, e, i, j);
  return max(v1, v2);
}
int main(){
  freopen("input.txt", "r", stdin);
  int len, q, a, b;
  while(scanf("%d", &len) != EOF && len){
    scanf("%d", &q);
    for(int i = 1; i < len + 1; scanf("%d", &n[i]), i++);
    init(1, 1, len);
    while(q--){
      scanf("%d%d", &a, &b);
      printf("%d\n", query(1, 1, len, a, b));
    }
  }
  return 0;
}
