#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  ll a, b;
  char ch;
  scanf("%lld %c %lld", &a, &ch, &b);
  printf("%lld\n", (ch == '+') ? a + b : a - b);
  return 0;
}
