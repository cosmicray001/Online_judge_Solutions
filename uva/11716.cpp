#include <bits/stdc++.h>
#define le 102
using namespace std;
char n[le][le];
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t;
  string s;
  for(scanf("%d", &t), getchar(); t--; ){
    getline(cin, s);
    int len = s.size();
    if((int)sqrt(len) * (int)sqrt(len) != len) printf("INVALID\n");
    else{
      for(int i = 0, l = 0; l < sqrt(len); l++){
        for(int j = 0; j < sqrt(len); j++, i++) n[l][j] = s[i];
      }
      for(int i = 0; i < sqrt(len); i++){
        for(int j = 0; j < sqrt(len); j++){
          cout << n[j][i];
        }
      }
      printf("\n");
    }
  }
  return 0;
}
