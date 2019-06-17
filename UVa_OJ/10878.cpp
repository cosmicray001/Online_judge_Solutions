#include <bits/stdc++.h>
using namespace std;
int n[] = {0, 128, 64, 32, 16, 8, 0, 4, 2, 1};
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  string s;
  getline(cin, s);
  while(getline(cin, s) && s[0] == '|'){
    int a = 0;
    for(int i = 1; i < s.size() - 1; i++){
      if(s[i] == 'o') a += n[i];
      if(i == 5) i++;
    }
    printf("%c", a);
  }
  return 0;
}
