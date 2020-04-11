#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  int a = (s[s.size() - 2] - '0') * 10 + (s[s.size() - 1] - '0');
  printf("%d\n", (a % 4 != 0) ? 0 : 4);
  return 0;
}
