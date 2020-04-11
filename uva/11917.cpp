#include <bits/stdc++.h>
using namespace std;
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int t, co = 0, a, b, d;
  string s;
  for(scanf("%d", &t); t--; ){
    map<string, int> mp;
    scanf("%d", &a);
    while(a--){
      cin >> s >> b;
      mp[s] = b;
    }
    cin >> d >> s;
    printf("Case %d: ", ++co);
    if(mp.find(s) != mp.end()){
      b = mp[s];
      if(b <= d) printf("Yesss\n");
      else if(b > d && b <= d + 5) printf("Late\n");
      else printf("Do your own homework!\n");
    }
    else printf("Do your own homework!\n");
  }
  return 0;
}
