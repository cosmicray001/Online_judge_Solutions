#include <bits/stdc++.h>
using namespace std;
int main(){
  int x, a, b;
  cin >> x >> a >> b;
  if(-a + b <= 0) printf("delicious\n");
  else if(-a + b <= x) printf("safe\n");
  else printf("dangerous\n");
  return 0;
}
