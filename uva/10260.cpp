#include <bits/stdc++.h>
using namespace std;
map<char, char> mp;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  mp['B'] = mp['F'] = mp['P'] = mp['V'] = '1';
  mp['C'] = mp['G'] = mp['J'] = mp['K'] = mp['Q'] = mp['S'] = mp['X'] = mp['Z'] = '2';
  mp['D'] = mp['T'] = '3';
  mp['L'] = '4';
  mp['M'] = mp['N'] = '5';
  mp['R'] = '6';
  mp['A'] = mp['E'] = mp['I'] = mp['O'] = mp['U'] = mp['H'] = mp['W'] = mp['Y'] = 'A';
  char ch[21];
  while(scanf("%s", ch) != EOF){
    vector<char> v;
    for(int i = 0; i < strlen(ch); i++) v.push_back(mp[ch[i]]);
    for(int i = 0; i < v.size(); i++){
      if(i == 0 && v[i] >= '1' && v[i] <= '6') printf("%c", v[i]);
      else if(v[i] >= '1' && v[i] <= '6' && v[i - 1] != v[i]) printf("%c", v[i]);
    }
    printf("\n");
  }
  return 0;
}
