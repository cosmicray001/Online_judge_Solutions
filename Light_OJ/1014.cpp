#include <bits/stdc++.h>
#define ll long long int
#define le 10004
using namespace std;
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int t, co = 0;
  ll a, b, d;
  for(scanf("%d", &t); t--; ){
    scanf("%lld %lld", &a, &b);
    printf("Case %d:", ++co);
    //if(co == 125) printf("%lld %lld\n", a, b);
    if(a == b){
      printf(" 1\n");
      continue;
    }
    d = a - b;
    set<ll> st;
    for(ll i = 1; i * i <= d; i++){
      if(d % i == 0){
        ll ii = d / i;
        if(ii > b) st.insert(ii);
        if(i > b) st.insert(i);
      }
    }
    if(st.empty()) printf(" impossible\n");
    else{
      for(set<ll> :: iterator it = st.begin(); it != st.end(); it++){
          printf(" %lld", *it);
      }
      printf("\n");
    }
  }
  return 0;
}
