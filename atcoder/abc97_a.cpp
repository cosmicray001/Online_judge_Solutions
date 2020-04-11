#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  printf("%s\n", (abs(a - c) <= d || ((abs(a - b) <= d) && (abs(b - c) <= d))) ? "Yes" : "No");
  return 0;
}
