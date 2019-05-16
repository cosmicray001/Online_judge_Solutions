#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b;
  cin >> a >> b;
  a = a % 500;
  printf("%s\n", (a <= b) ? "Yes" : "No");
  return 0;
}
