#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, len;
  string s;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &len);
    cin >> s;
    int ans = 0, sum = 0;
    bool f = false;
    for(int i = 0; i < len; i++){
      if(s[i] == '.') f = true;
      if(f) sum++;
      if(sum == 3){
        ans++;
        sum = 0;
        f = false;
      }
    }
    if(sum != 0) ans++;
    printf("Case %d: %d\n", ++co, ans);
  }
  return 0;
}
