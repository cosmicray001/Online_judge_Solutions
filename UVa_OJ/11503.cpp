#include <bits/stdc++.h>
#define le 100005
using namespace std;
int p[le], r[le];
map<string, int> mp;
int fnc(int a){
  if(p[a] == a) return a;
  p[a] = fnc(p[a]);
  return p[a];
}
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int t, n, a, b;
  char ch[22], ch1[22];
  for(scanf("%d", &t); t--; ){
    memset(p, 0, sizeof(p));
    //for(int i = 0; i < le; r[i] = 1, i++);
    scanf("%d", &n);
    int l = 1;
    for(int i = 0; i < n; i++){
      scanf("%s %s", ch, ch1);
      if(!mp[ch]){
        mp[ch] = l;
        p[l] = l;
        r[l] = 1;
        a = l++;
      }
      else a = mp[ch];
      if(!mp[ch1]){
        mp[ch1] = l;
        p[l] = l;
        r[l] = 1;
        b = l++;
      }
      else b = mp[ch1];
      a = fnc(a);
      b = fnc(b);
      //printf("%d %d\n", a, b);
      if(a != b){
        if(a > b) swap(a, b);
        p[b] = a;
        r[a] += r[b];
      }
      printf("%d\n", r[a]);
    }
    mp.clear();
  }
  return 0;
}
