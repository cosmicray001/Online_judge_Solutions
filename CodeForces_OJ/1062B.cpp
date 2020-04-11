#include <bits/stdc++.h>
#define le 1003
using namespace std;
int n[le >> 6];
vector<int> v;
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    v.push_back(2);
    for(int i = 3; i < le; i += 2) if(!ck(i)) v.push_back(i);
}
vector<int> ans;
void fnc(int a){
  for(int i = 0; i < v.size() && v[i] * v[i] <= a; i++){
    if(a % v[i] == 0){
      ans.push_back(v[i]);
      while(a % v[i] == 0) a /= v[i];
    }
  }
  if(a != 1) ans.push_back(a);
}
int main(){
  se();
  int a;
  scanf("%d", &a);
  fnc(a);
  for(int i = 0; i < ans.size(); i++) printf("%d\n", ans[i]);
  return 0;
}
