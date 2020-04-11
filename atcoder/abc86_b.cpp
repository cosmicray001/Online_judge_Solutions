#include <bits/stdc++.h>
using namespace std;
int main(){
  double a;
  string s;
  cin >> a >> s;
  for(int i = 0; i < s.size(); i++) a = (a * 10) + (s[i] - '0');
  int ve = (int)sqrt(a);
  printf("%s\n", (ve * ve == (int)a) ? "Yes" : "No");
  return 0;
}
