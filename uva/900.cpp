#include <bits/stdc++.h>
#define ll long long int
#define le 51
using namespace std;
ll n[le];
void fnc(){
  n[1] = 1;
  n[2] = 2;
  for(int i = 3; i < le; i++) n[i] = n[i - 2] + n[i - 1];
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  fnc();
  int a;
  while(scanf("%d", &a) != EOF && a) printf("%lld\n", n[a]);
  return 0;
}
