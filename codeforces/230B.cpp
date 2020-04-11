#include <bits/stdc++.h>
#define le 1000006
#define ll long long int
using namespace std;
int n[le >> 6];
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
}
int main(){
  se();
  int t;
  ll a;
  for(scanf("%d", &t); t--; ){
    scanf("%lld", &a);
    ll x = sqrt(a);
    if((x * x == a && x == 2) || (x * x == a && !ck(x) && x % 2 != 0 && x != 1)) printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}
