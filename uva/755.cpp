#include <bits/stdc++.h>
using namespace std;
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  map<char, char> m;
  m['A'] = m['B'] = m['C'] = '2';
  m['D'] = m['E'] = m['F'] = '3';
  m['G'] = m['H'] = m['I'] = '4';
  m['J'] = m['K'] = m['L'] = '5';
  m['M'] = m['N'] = m['O'] = '6';
  m['P'] = m['R'] = m['S'] = '7';
  m['T'] = m['U'] = m['V'] = '8';
  m['W'] = m['X'] = m['Y'] = '9';
  int t, len, co = 0;
  for(scanf("%d", &t); t--; ){
    if(co) printf("\n");
    scanf("%d", &len);
    map<string, int> mp;
    for(int i = 0; i < len; i++){
      string s, s1 = "";
      cin >> s;
      int cc = 0;
      for(int j = 0; j < s.size(); j++){
        if(s[j] >= 'A' && s[j] <= 'Y' && s[j] != 'Q'){
          s1 += (char)m[s[j]];
          cc++;
        }
        else if(s[j] >= '0' && s[j] <= '9'){
          s1 += s[j];
          cc++;
        }
        if(cc == 3) s1 += '-', cc++;
      }
      mp[s1]++;
    }
    bool f = true;
    for(map<string, int> :: iterator it = mp.begin(); it != mp.end(); it++){
      if((*it).second > 1){
        cout << (*it).first << " " << (*it).second << endl;
        f = false;
      }
    }
    if(f) printf("No duplicates.\n");
    co++;
  }
  return 0;
}
