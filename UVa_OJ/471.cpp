#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool f;
bool fnc(ll a, ll b){
  int arr[12];
  for(int i = 0; i < 12; arr[i] = 0, i++);
  ll temp = a;
  for(; temp > 0; temp /= 10){
    int re = (int)(temp % 10);
    arr[re]++;
    if(arr[re] > 1) return false;
  }
  for(int i = 0; i < 12; arr[i] = 0, i++);
  temp = b;
  for(; temp > 0; temp /= 10){
    int re = (int)(temp % 10);
    arr[re]++;
    if(arr[re] > 1) return false;
  }
  return true;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n;
  int t;
  for(scanf("%d", &t); t--; ){
    scanf("%lld", &n);
    f = true;
    for(ll i = 1; i * n < 9999999999 && f; i++){
      if(fnc(i, i * n)) printf("%lld / %lld = %lld\n", n * i, i, n);
    }
    if(t) printf("\n");
  }
  return 0;
}
