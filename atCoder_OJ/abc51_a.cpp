#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == ',') printf(" ");
    else printf("%c", s[i]);
  }
  printf("\n");
  return 0;
}
