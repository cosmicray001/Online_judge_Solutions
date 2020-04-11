#include <bits/stdc++.h>
#define ll long long int
#define le 400005
#define li 100005
using namespace std;
struct info{
  ll sum, pro;
}arr[le];
void update(int nd, int b, int e, int i, int j, int v){
  if(b > j || e < i) return;
  if(b >= i && e <= j){

  }
}
int main(){
  int len, q, a, b, c;
  scanf("%d %d", &len, &q);
  memset(arr, 0, sizeof(0));
  while(q--){
    scanf("%d %d %d", &c, &a, &b);
    if(!c) update(1, 0, len - 1, a, b, 1);
    else printf("%d\n", query(1, 0, len - 1, a, b, 0));
  }
  return 0;
}
