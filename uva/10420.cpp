#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t;
  string s;
  for(scanf("%d", &t), getchar(); t--; ){
    getline(cin, s);
    stringstream ss(s);
    string a;
    ss >> a;
    mp[a]++;
  }
  for(map<string, int> :: iterator it = mp.begin(); it != mp.end(); it++){
    cout << (*it).first << " " << (*it).second << endl;
  }
  return 0;
}
