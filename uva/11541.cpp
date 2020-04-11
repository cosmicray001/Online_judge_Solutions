#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0;
  string s;
  for(scanf("%d", &t); t--; ){
    cin >> s;
    printf("Case %d: ", ++co);
    int a = 0;
    char ch = ' ', ch1;
    for(int i = 0; i < s.size(); i++){
      if(s[i] >= 'A' && s[i] <= 'Z'){
        if(ch != ' '){
          for(int i = 0; i < a; i++) cout << ch;
          a = 0;
        }
        ch = s[i];
      }
      else a = (a * 10) + (s[i] - '0');
    }
    for(int i = 0; i < a; i++) cout << ch;
    printf("\n");
  }
  return 0;
}
