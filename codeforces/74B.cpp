#include <bits/stdc++.h>
using namespace std;
int n[300];
int main(){
  //freopen("input.txt", "r", stdin);
  string s;
  for(int i = 0; i < 3; i++){
    cin >> s;
    if(s[1] == '>') n[s[0]]++;
    else n[s[2]]++;
  }
  if(n['A'] == n['B'] || n['A'] == n['C'] || n['B'] == n['C']){
    printf("Impossible\n");
    return 0;
  }
  for(int i = 'A'; i < 'C' + 1; i++) if(n[i] == 0) printf("%c", i);
  for(int i = 'A'; i < 'C' + 1; i++) if(n[i] == 1) printf("%c", i);
  for(int i = 'A'; i < 'C' + 1; i++) if(n[i] == 2) printf("%c", i);
  printf("\n");
  return 0;
}
