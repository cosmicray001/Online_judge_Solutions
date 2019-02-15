#include <bits/stdc++.h>
#define le 202
using namespace std;
int p[le];
int fnc(int a){
  if(p[a] == a) return a;
  return p[a] = fnc(p[a]);
}
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n, m, a, b;
  while(scanf("%d", &n) != EOF && n){
    for(int i = 0; i < n + 1; p[i] = i, i++);
    scanf("%d", &m);
    int co = 0;
    for(int i = 0; i < m; i++){
      scanf("%d %d", &a, &b);
      a = fnc(a);
      b = fnc(b);
      if(a != b){
        if(a > b) swap(a, b);
        p[b] = a;
      }
      else co++;
    }
    printf("%s\n", (co > 1) ? "BICOLORABLE." : "NOT BICOLORABLE.");
  }
  return 0;
}
