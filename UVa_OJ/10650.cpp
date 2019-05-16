#include <bits/stdc++.h>
#define le 32004
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
  int a, b;
  while(scanf("%d %d", &a, &b) != EOF && (a || b)){
    int idx = fnc(a);
    for(int i = idx + 1; i < v.size() && v[i] <= b; i++){

    }
  }
}
