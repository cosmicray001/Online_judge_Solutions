#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b;
  string s;
  cin >> a >> b;
  cin >> s;
  for(int i = 0; i < s.size(); i++){
    if(i == b - 1) printf("%c", s[i] - 'A' + 'a');
    else cout << s[i];
  }
  printf("\n");
  return 0;
}
