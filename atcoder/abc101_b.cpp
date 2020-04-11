#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, sum = 0, t;
  cin >> a;
  t = a;
  for(; a > 0; a /= 10) sum += (a % 10);
  printf("%s\n", (t % sum == 0) ? "Yes" : "No");
  return 0;
}
