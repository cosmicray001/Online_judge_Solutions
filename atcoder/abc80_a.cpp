#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b, c;
  cin >> a >> b >> c;
  if(a * b < c) printf("%d\n", a * b);
  else printf("%d\n", c);
  return 0;
}
