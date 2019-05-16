#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b, c;
  cin >> a >> b >> c;
  printf("%s\n", (a <= c && (a + b) >= c) ? "YES" : "NO");
  return 0;
}
