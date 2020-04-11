#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int n, m, a;
  while(scanf("%d %d", &n, &m) != EOF){
    map<string, int> mp;
    char ch[18];
    for(int i = 0; i < n; i++){
      scanf("%s %d", ch, &a);
      mp[ch] = a;
    }
    for(int i = 0; i < m; i++){
      int sum = 0;
      string s;
      while(cin >> s){
        if(s == ".") break;
        if(mp.find(s) != mp.end()) sum += mp[s];
      }
      printf("%d\n", sum);
    }
  }
  return 0;
}
