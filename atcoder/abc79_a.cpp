#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  if(s[1] != s[2]) printf("No\n");
  else if(s[0] == s[1] || s[3] == s[1]) printf("Yes\n");
  else printf("No\n");
  return 0;
}
