#include <bits/stdc++.h>
#define le 130
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  string s, ss;
  while(getline(cin, s)){
    getline(cin, ss);
    int co[le], so[le];
    for(int i = 0; i < le; co[i] = 0, so[i] = 0, i++);
    for(int i = 0; i < s.size(); i++) co[s[i]]++;
    for(int i = 0; i < ss.size(); i++) so[ss[i]]++;
    for(int i = 0; i < le; i++){
      for(int j = 0; j < co[i] && j < so[i]; j++) printf("%c", i);
    }
    printf("\n");
  }
  return 0;
}
