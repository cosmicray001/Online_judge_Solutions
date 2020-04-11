#include <bits/stdc++.h>
#define le 100005
using namespace std;
int p[le];
int fnc(int a){
  if(p[a] == a) return a;
  return p[a] = fnc(p[a]);
}
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int t, n, m, a, b;
  for(scanf("%d", &t); t--; ){
    for(int i = 0; i < le; p[i] = i, i++);
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++){
      scanf("%d %d", &a, &b);
      if(a > b) swap(a, b);
      p[b] = a;
    }
    int co = 0;
    for(int i = 1; i < n + 1; i++) if(fnc(i) == i) co++;
    printf("%d\n", co);
  }
  return 0;
}
