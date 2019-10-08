#include <bits/stdc++.h>
#define ll long long int
#define le 800005
#define li 200005
using namespace std;
ll n[li];
struct info{
  ll sum, pro;
} arr[le];
void init(int nd, int b, int e){
  if(b == e){
    arr[nd].sum = n[b];
    arr[nd].pro = 0;
  }
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  init(l, b, m);
  init(r, m + 1, e);
  arr[nd].sum = min(arr[l].sum, arr[r].sum);
}
int fnc(string s){
  string a;
  stringstream ss(s);
  int co = 0;
  while(ss >> a) co++;
  return co;
}
void update(itn nd, int b, int e, int i, int j, ll v){
  if(b > j || e < i) return;
  if(b >= i && e <= j){
    arr[nd].sum += ((e - b + 1) * v);
    arr[nd].pro += v;
    return;
  }
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  update(l, b, m, i, j, v);
  update()
}
int main(){
  int len, q, a, b;
  ll c;
  string s;
  scanf("%d", &len);
  for(int i = 0; i < len; scanf("%lld", &n[i]), i++);
  init(1, 0, len - 1);
  scanf("%d", &q);
  while(q--){
    cin >> s;
    if(fnc(s) == 3){
      stringstream ss(s);
      ss >> a >> b >> c;
      if(b < a){
        update(1, 0, len - 1, a, len - 1, c);
        update(1, 0, len - 1, 0, b, c);
      }
      else update(1, 0, len - 1, a, b);
    }
    else{
      if(b < a) printf("%lld\n", min(query(1, 0, len - 1, a, len - 1, 0), query(1, 0, len - 1, 0, a, 0)));
      else printf("%lld\n", query(1, 0, len, a, b, 0));
    }
  }
  return 0;
}
