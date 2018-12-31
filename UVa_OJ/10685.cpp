#include <bits/stdc++.h>
#define le 5003
using namespace std;
int p[le], r[le];
int fin(int a){
  if(p[a] == a) return a;
  p[a] = fin(p[a]);
  return p[a];
}
void uni(int a, int b){
  int x = fin(a);
  int y = fin(y);
  if(x != y){
    p[y] = x;
    r[x] += r[y];
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int col, row;
  char ch[35];
  while(scanf("%d %d", &col, &row) != EOF && col && row){
    map<string, int> mp;
    memset(r, 0, sizeof(r));
    memset(p, 0, sizeof(p));
    for(int i = 0; i < col; i++){
      scanf("%s", ch);
      mp[ch] = i;
      p[i] = i;
      r[i] = 1;
    }
    for(int i = 0; i < row; i++){
      scanf("%s", ch);
      int x = mp[ch];
      scanf("%s", ch);
      int y = mp[ch];
      uni(x, y);
    }
    int ans = 0;
    for(int i = 0; i < col; i++) ans = max(ans, r[i]);
    printf("%d\n", ans);
  }
  return 0;
}
