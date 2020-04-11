/*#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  string s;
  scanf("%d", &n);
  getline(cin, s);
  getline(cin, s);
  printf("%c", s[0]);
  for(int i = 1; i < n; i++){
    if(s[i] != s[i - 1]) printf("%c", s[i]);
  }
  printf("\n");
  return 0;
}
