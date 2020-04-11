#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int ans = 0;
  if(n % 5 != 0) ans++;
  printf("%d\n", (n / 5) + ans);
  return 0;
}
