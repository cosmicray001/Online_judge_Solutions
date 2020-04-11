#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b, c;
  cin >> a >> b >> c;
  if(a == b) printf("%d\n", c);
  else if(a == c) printf("%d\n", b);
  else printf("%d\n", a);
  return 0;
}
