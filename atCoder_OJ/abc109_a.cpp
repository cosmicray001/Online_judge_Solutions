#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b;
  cin >> a >> b;
  printf("%s\n", (a % 2 != 0 && b % 2 != 0) ? "Yes" : "No");
  return 0;
}
