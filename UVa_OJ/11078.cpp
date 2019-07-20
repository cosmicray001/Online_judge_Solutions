#include <bits/stdc++.h>
using namespace std;
vector<int> v;
vector<int> v1;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, len, a;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &len);
    for(int i = 0; i < len; scanf("%d", &a), v.push_back(a), v1.push_back(a), i++);
    int mx = -INT_MAX, mn = INT_MAX;
    for(int i = v1.size() - 2; i >= 0; i--){
      mn = min(mn, v[i + 1]);
      v1[i] = mn;
    }
    for(int i = 0; i < v.size() - 1; i++){
      mx = max(mx, v[i] - v1[i]);
    }
    printf("%d\n", mx);
    v.clear();
    v1.clear();
  }
  return 0;
}
