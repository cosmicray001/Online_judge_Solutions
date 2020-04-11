#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  string s;
  while(getline(cin, s)){
    for(int i = 0; i < s.size(); i++) printf("%c", s[i] - 7);
    printf("\n");
  }
  return 0;
}
