#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, len, k;
  string s;
  for(scanf("%d", &t); t--; ){
    vector<char> v;
    int c = 0, idx = 0;
    cin >> len >> k >> s;
    for(int i = 0; i < len; i++){
      if(v.size() - idx > k) idx++;
      for(int j = idx; j < v.size(); j++){
        if(v[j] == s[i]){
          c++;
          break;
        }
      }
      v.push_back(s[i]);
    }
    printf("Case %d: %d\n", ++co, c);
  }
  return 0;
}
