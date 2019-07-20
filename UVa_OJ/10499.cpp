#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll a;
  while(scanf("%lld", &a) != EOF && a >= 0){
    if(a == 1) printf("0%c\n", '%');
    else printf("%lld%c\n", a * 25, '%');
  }
  return 0;
}
