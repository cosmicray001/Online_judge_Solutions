#include <bits/stdc++.h>
#define le 10004
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, d, p, a, b, cc = 0;
  for(scanf("%d", &t); t--; ){
    if(cc) printf("\n");
    map<int, string> mp;
    vector<pair<int, int> > v;
    char ch[22];
    scanf("%d", &d);
    for(int i = 0; i < d; i++){
      scanf("%s %d %d", ch, &a, &b);
      mp[i] = ch;
      v.push_back(make_pair(a, b));
    }
    scanf("%d", &p);
    for(int i = 0; i < p; i++){
      scanf("%d", &a);
      string s;
      int co = 0;
      for(int j = 0; j < v.size(); j++){
        if(a >= v[j].first && a <= v[j].second){
          co++;
          s = mp[j];
        }
      }
      if(co == 1) cout << s << endl;
      else printf("UNDETERMINED\n");
    }
    cc++;
  }
  return 0;
}
