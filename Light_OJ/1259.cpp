#include <bits/stdc++.h>
#define le 10000007
using namespace std;
int n[le >> 6];
vector<int> v;
bool cck[le];
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    v.push_back(2);
    cck[2] = true;
    for(int i = 3; i < le; i += 2) if(!ck(i)){
      v.push_back(i);
      cck[i] = true;
    }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  se();
  int t, co = 0, a;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &a);
    int ans = 0;
    for(int i = 0; i < v.size() && v[i] <= a / 2; i++){
      int ve = a - v[i];
      if(cck[ve]) ans++;
    }
    printf("Case %d: %d\n", ++co, ans);
  }
  return 0;
}
