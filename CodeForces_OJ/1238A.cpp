#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  long long int a, b;
  for(scanf("%d", &t); t--; ){
    scanf("%lld %lld", &a, &b);
    printf("%s\n", (a - b > 1) ? "YES" : "NO");
  }
  return 0;
}
