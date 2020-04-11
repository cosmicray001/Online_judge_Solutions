#include <bits/stdc++.h>
#define le 1003
using namespace std;
vector<int> v[le];
int in[le];
int main(){
  //freopen("input.txt", "r", stdin);
  int n, m, a, b;
  scanf("%d %d", &n, &m);
  for(int i = 0; i < m; scanf("%d %d", &a, &b), v[a].push_back(b), in[b]++, i++);
  bool f = true;
  for(int j = 0; j < n; j++){
    scanf("%d", &a);
    if(f){
      if(in[a] == 0) for(int i = 0; i < v[a].size(); i++) in[v[a][i]]--;
      else f = false;
    }
  }
  printf("%s\n", f ? "YES" : "NO");
  return 0;
}
