#include <bits/stdc++.h>
using namespace std;
int main(){
  string a, b, c;
  cin >> a >> b >> c;
  if(a[a.size() - 1] == b[0] && b[b.size() - 1] == c[0]) printf("YES\n");
  else printf("NO\n");
  return 0;
}
