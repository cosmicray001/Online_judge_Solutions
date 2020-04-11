#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  string s;
  cin >> s;
  int sum = 0;
  for(int i = s.size() - 1; i >= 0; i -= 2){
    int x = s[i] - '0';
    x *= 2;
    if(x > 9){
      int a = x % 10;
      x /= 10;
      int b = x % 10;
      sum += a + b;
    }
    else sum += x;
  }
  printf("%s\n", (sum % 10 == 0) ? "YES" : "NO");
  return 0;
}
