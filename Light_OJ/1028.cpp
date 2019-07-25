#include <bits/stdc++.h>
#define le 1000006
#define ll long long int
using namespace std;
int n[le >> 6];
vector<int> v;
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    v.push_back(2);
    for(int i = 3; i < le; i += 2) if(!ck(i)) v.push_back(i);
}
ll fnc(ll a){
  ll ans = 1;
  for(int i = 0; i < v.size() && v[i] * v[i] <= a; i++){
    if(a % v[i] == 0){
      int p = 1;
      while(a % v[i] == 0){
        a /= v[i];
        p++;
      }
      ans *= p;
    }
  }
  if(a > 1) ans *= 2;
  return ans;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  se();
  int t, co = 0;
  ll a;
  for(scanf("%d", &t); t--; ){
    scanf("%lld", &a);
    a = fnc(a);
    printf("Case %d: %lld\n", ++co, a - 1);
  }
  return 0;
}
