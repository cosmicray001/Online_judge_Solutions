#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  for(int i = 0; i < s.size(); i++){
    if(i == 3) printf("8");
    else printf("%c", s[i]);
  }
  return 0;
}
