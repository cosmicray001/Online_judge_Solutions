#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  printf("%d\n", min(a, b) + min(c, d));
  return 0;
}
