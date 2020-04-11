#include <bits/stdc++.h>
#define l 1000006
#define ll long long int
#define le 47004
using namespace std;
int n[le >> 6];
bool arr[l];
vector<int> v;
vector<ll> pri;
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    v.push_back(2);
    for(int i = 3; i < le; i += 2) if(!ck(i)) v.push_back(i);
}
void segse(ll a, ll b){
  memset(arr, true, sizeof(arr));
  if(a == 1) arr[0] = false;
  for(int i = 0; i < v.size() && v[i] * v[i] <= b; i++){
    ll base = (a / v[i]) * v[i];
    if(base < a) base += v[i];
    for(ll j = base; j <= b; j += v[i]) arr[j - a] = false;
    if(base == v[i]) arr[base - a] = true;
  }
  for(int i = 0; i < b - a + 1; i++) if(arr[i]) pri.push_back(i + a);
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  se();
  ll a, b;
  while(scanf("%lld %lld", &a, &b) != EOF){
    segse(a, b);
    if(pri.size() < 2) printf("There are no adjacent primes.\n");
    else{
      ll ma = -1, mi = INT_MAX;
      pair<ll, ll> ma1;
      pair<ll, ll> mi1;
      for(int i = 1; i < pri.size(); i++){
        if(ma < (pri[i] - pri[i - 1])){
          ma = pri[i] - pri[i - 1];
          ma1 = make_pair(pri[i - 1], pri[i]);
        }
        if(mi > (pri[i] - pri[i - 1])){
          mi = pri[i] - pri[i - 1];
          mi1 = make_pair(pri[i - 1], pri[i]);
        }
      }
      printf("%lld,%lld are closest, %lld,%lld are most distant.\n", mi1.first, mi1.second, ma1.first, ma1.second);
    }
    pri.clear();
  }
  return 0;
}
