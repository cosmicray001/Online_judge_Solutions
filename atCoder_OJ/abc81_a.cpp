#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, co = 0;
  cin >> a;
  for(; a > 0; a /= 10) co += (a % 10);
  printf("%d\n", co);
  return 0;
}
