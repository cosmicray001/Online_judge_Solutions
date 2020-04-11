#include <bits/stdc++.h>
using namespace std;
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int t, n[6];
  char ch[20];
  string s;
  while(scanf("%d", &t) != EOF && t){
    map<string, int> mp;
    while(t--){
      for(int i = 0; i < 5; scanf("%d", &n[i]), i++);
      sort(n, n + 5);
      sprintf(ch, "%d%d%d%d%d", n[0], n[1], n[2], n[3], n[4]);
      s = ch;
      mp[s]++;
    }
    int mn = 0, m = 0;
    for(map<string, int> :: iterator it = mp.begin(); it != mp.end(); it++){
      if((*it).second > m){
        m = (*it).second;
        mn = 0;
      }
      if((*it).second == m) mn += m;
    }
    printf("%d\n", mn);
  }
  return 0;
}
