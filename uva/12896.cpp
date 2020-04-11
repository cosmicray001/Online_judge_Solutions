#include <bits/stdc++.h>
#define le 102
using namespace std;
int n[le], m[le];
string s[] = {" ", ".,?\"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, len, a;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &len);
    for(int i = 0; i < len; scanf("%d", &n[i]), i++);
    for(int i = 0; i < len; scanf("%d", &m[i]), i++);
    for(int i = 0; i < len; i++){
      cout << s[n[i]][m[i] - 1];
    }
    printf("\n");
  }
  return 0;
}
