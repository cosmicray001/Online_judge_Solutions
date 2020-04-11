#include <bits/stdc++.h>
using namespace std;
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int x;
  vector<int> v;
  map<int, int> mp;
  while(scanf("%d", &x) != EOF){
    if(mp[x] == 0){
      mp[x]++;
      v.push_back(x);
    }
    else mp[x]++;
  }
  for(int i = 0; i < v.size(); i++) printf("%d %d\n", v[i], mp[v[i]]);
  return 0;
}
