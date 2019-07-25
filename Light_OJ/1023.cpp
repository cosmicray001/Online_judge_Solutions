#include <bits/stdc++.h>
using namespace std;
string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
vector<char> v;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, n, k;
  for(scanf("%d", &t); t--; ){
    v.clear();
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++) v.push_back(s[i]);
    int ans = 0;
    printf("Case %d:\n", ++co);
    do{
      ans++;
      for(int i = 0; i < v.size(); printf("%c", v[i]), i++);
      printf("\n");
    }while(ans < k && next_permutation(v.begin(), v.end()));
  }
  return 0;
}
