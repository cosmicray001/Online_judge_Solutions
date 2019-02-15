#include <bits/stdc++.h>
#define le 1003
using namespace std;
vector<int> v[le];
vector<pair<int, int> > p;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, len, a, b;
  string s;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &len);
    getchar();
    int m = INT_MAX;
    for(int i = 1; i < len + 1; i++){
      getline(cin, s);
      stringstream ss(s);
      while(ss >> b) v[i].push_back(b);
      int x = (int)v[i].size();
      p.push_back(make_pair(x, i));
      m = min(m, x);
    }
    sort(p.begin(), p.end());
    printf("%d", p[0].second);
    for(int i = 1; i < p.size(); i++){
      if(p[i].first != m){
        break;
      }
      printf(" %d", p[i].second);
    }
    printf("\n");
    for(int i = 0; i < le; v[i].clear(), i++);
    p.clear();
  }
  return 0;
}
