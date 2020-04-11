#include <bits/stdc++.h>
using namespace std;
int main(){
  string s, s1;
  cin >> s >> s1;
  for(int i = 0, j = 2; i < 3; i++, j--){
    if(s[i] != s1[j]){
      printf("NO\n");
      return 0;
    }
  }
  printf("YES\n");
  return 0;
}
