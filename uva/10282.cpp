#include <bits/stdc++.h>
using namespace std;
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  map<string, string> mp;
  string s, a, b;
  while(getline(cin, s)){
    if(s == "") break;
    istringstream cs(s);
    cs >> a >> b;
    mp[b] = a;
  }
  while(cin >> a){
    if(mp.find(a) != mp.end()) cout << mp[a] << endl;
    else printf("eh\n");
  }
  return 0;
}
