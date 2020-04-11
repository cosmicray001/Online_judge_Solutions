#include <bits/stdc++.h>
#define le 1000006
using namespace std;
int n[le >> 6];
vector<int> v;
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
map<int, int> mp;
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    v.push_back(2);
    for(int i = 3; i < le; i += 2) if(!ck(i)) v.push_back(i);
}
int fnc(int key){
  int lo = 0, hi = v.size() - 1, mid;
  while(lo <= hi){
    mid = lo + (hi - lo) / 2;
    if(key <= v[mid]) hi = mid - 1;
    else lo = mid + 1;
  }
  return lo;
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    se();
    int t, a, b;
    for(scanf("%d", &t); t--; ){
      scanf("%d %d", &a, &b);
      int idx = fnc(a);
      if(v[idx] >= b) printf("No jumping champion\n");
      else{
        bool f = false;
        for(int i = idx + 1; i < v.size() && v[i] <= b; i++){
          mp[v[i] - v[i - 1]]++;
          f = true;
        }
        if(!f) printf("No jumping champion\n");
        else{
          map<int, int> sg;
          int sum = -1, ans;
          for(map<int, int> :: iterator it = mp.begin(); it != mp.end(); it++){
            if(sum < (*it).second){
              sum = (*it).second;
              ans = (*it).first;
            }
            sg[(*it).second]++;
          }
          if(sg[sum] == 1) printf("The jumping champion is %d\n", ans);
          else printf("No jumping champion\n");
        }
      }
      mp.clear();
    }
    return 0;
}
