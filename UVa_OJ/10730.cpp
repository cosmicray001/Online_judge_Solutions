#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
vector<int> v;
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int len, a;
  char ch;
  while(scanf("%d", &len) != EOF && len){
    scanf("%c", &ch);
    for(int i = 0; i < len; i++){
      scanf("%d", &a);
      mp[a] = i;
      v.push_back(a);
    }
    bool f = true;
    for(int i = 0; i < len - 2 && f; i++){
      for(int j = i + 1; j < v.size() - 1 && f; j++){
        int x = v[j] - v[i] + v[j];
        if(v[j] > v[i] && mp[x] > j) f = false;
      }
    }
    printf("%s\n", f ? "yes" : "no");
    v.clear();
    mp.clear();
  }
  return 0;
}
