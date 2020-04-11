#include <bits/stdc++.h>
#define le 50004
using namespace std;
int p[le];
int fnc(int a){
  if(p[a] == a) return a;
  p[a] = fnc(p[a]);
  return p[a];
}
void jon(int a, int b){
  int x = fnc(a);
  int y = fnc(b);
  if(x != y) p[y] = x;
}
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int a, b, co = 0, x, y;
  while(scanf("%d %d", &a, &b) != EOF && a){
    for(int i = 1; i < a + 1; p[i] = i, i++);
    for(int i = 0; i < b; scanf("%d %d", &x, &y), jon(x, y), i++);
    set<int> st;
    for(int i = 1; i < a + 1; fnc(i), st.insert(p[i]), i++);
    printf("Case %d: %d\n", ++co, st.size());
  }
  return 0;
}
