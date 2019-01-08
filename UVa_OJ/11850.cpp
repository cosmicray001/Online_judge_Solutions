#include <bits/stdc++.h>
using namespace std;
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int a, x;
  while(scanf("%d", &a) != EOF && a){
    vector<int> v;
    while(a--){
      scanf("%d", &x);
      v.push_back(x);
    }
    sort(v.begin(), v.end());
    bool f = true;
    for(int i = 1; i < v.size(); i++){
      if(v[i] - v[i - 1] > 200) f = false;
    }
    if(2 * (1422 - v[v.size() - 1]) > 200) f = false;
    printf("%s\n", f ? "POSSIBLE" : "IMPOSSIBLE");
  }
  return 0;
}
