#include <bits/stdc++.h>
#define le 1003
using namespace std;
int p[le];
int fnc(int a){
  if(p[a] == a) return a;
  return p[a] = fnc(p[a]);
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, len, a, b, st = 0;
  char ch;
  for(scanf("%d\n\n", &t); t--; ){
    if(st++) printf("\n");
    scanf("%d", &len);
    for(int i = 0; i < len + 1; p[i] = i, i++);
    string s;
    getline(cin, s);
    int co = 0, so = 0;
    while(1){
      if(!getline(cin, s) || s.empty()) break;
      stringstream ss(s);
      ss >> ch >> a >> b;
        if(ch == 'c'){
        a = fnc(a);
        b = fnc(b);
        if(a != b){
          if(a > b) swap(a, b);
          p[b] = a;
        }
      }
      else{
        if(fnc(a) == fnc(b)) co++;
        else so++;
      }
    }
    printf("%d,%d\n", co, so);
  }
  return 0;
}
