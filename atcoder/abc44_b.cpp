#include <bits/stdc++.h>
#define le 300
using namespace std;
int n[le];
int main(){
  memset(n, 0, sizeof(n));
  string s;
  cin >> s;
  for(int i = 0; i < s.size(); i++) n[s[i]]++;
  for(int i = 'a'; i < 'z' + 1; i++){
    if(n[i] % 2 != 0){
      printf("No\n");
      return 0;
    }
  }
  printf("Yes\n");
  return 0;
}
