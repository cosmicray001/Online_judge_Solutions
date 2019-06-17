#include <bits/stdc++.h>
#define le 100000008
using namespace std;
bool ck(int a){
  if(a == 2 || a == 3 || a == 5 || a == 7 || a == 13 || a == 17) return true;
  return false;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, a = 0;
  string s;
  cin >> t >> s;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == ','){
      printf("%s\n", ck(a) ? "Yes" : "No");
      a = 0;
    }
    else a = (a * 10) + (s[i] - '0');
  }
  printf("%s\n", ck(a) ? "Yes" : "No");
  return 0;
}
