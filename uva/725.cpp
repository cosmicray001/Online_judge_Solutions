#include <bits/stdc++.h>
#define le 80
using namespace std;
vector<int> v;
vector<pair<int, int> > p[le];
bool fnc(int a){
  int co[12];
  for(int i = 0; i < 12; co[i] = 0, i++);
  if(a < 10000) co[0]++;
  for(; a > 0; a /= 10){
    int re = a % 10;
    co[re]++;
    if(co[re] > 1) return false;
  }
  return true;
}
bool ck(int a, int b){
  int co[12];
  for(int i = 0; i < 12; co[i] = 0, i++);
  if(a < 10000 || b < 10000) co[0]++;
  for(; a > 0; a /= 10){
    int re = a % 10;
    co[re]++;
    if(co[re] > 1) return false;
  }
  for(; b > 0; b /= 10){
    int re = b % 10;
    co[re]++;
    if(co[re] > 1) return false;
  }
  return true;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  for(int i = 1000; i < 99999; i++){
    if(fnc(i)){
      v.push_back(i);
    }
  }
  for(int i = 0; i < v.size() - 1; i++){
    for(int j = i + 1; j < v.size(); j++){
      int x = v[j], y = v[i];
      if(x % y == 0 && (x > 9999 || y > 9999) && (x / y < 80)){
        if(ck(x, y)) p[x / y].push_back(make_pair(x, y));
      }
    }
  }
  int a, co = 0;
  while(scanf("%d", &a) != EOF && a){
    if(co++) printf("\n");
    if(p[a].size() == 0) printf("There are no solutions for %d.\n", a);
    else{
      for(int i = 0; i < p[a].size(); i++){
        int x = p[a][i].first, y = p[a][i].second;
        if(y < 10000) printf("%d / 0%d = %d\n", x, y, a);
        else printf("%d / %d = %d\n", x, y, a);
      }
    }
  }
  return 0;
}
