#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == '1') printf("9");
    else printf("1");
  }
  printf("\n");
  return 0;
}
