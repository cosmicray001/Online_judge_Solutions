#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b, c;
  cin >> a >> b >> c;
  printf("%s\n", (abs(a - b) < abs(a - c)) ? "A" : "B");
  return 0;
}
