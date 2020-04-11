#include <bits/stdc++.h>
using namespace std;
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int t;
  string ch;
  while(scanf("%d", &t) != EOF && t){
    getchar();
    int m = INT_MAX;
    vector<int> v;
    while(t--){
      getline(cin, ch);
      int co = 0;
      for(int i = 0; i < ch.size(); i++) if(ch[i] != 'X') co++;
      v.push_back(co);
      m = min(m, co);
    }
    int sum = 0;
    for(int i = 0; i < v.size(); i++) sum += (v[i] - m);
    printf("%d\n", sum);
  }
  return 0;
}
