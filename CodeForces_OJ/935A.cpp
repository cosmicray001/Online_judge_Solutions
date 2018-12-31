#include <bits/stdc++.h>
#define le 1000000 // it should be 100005
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
int fnc(int a){
  int sum = ;
  for(int i = 0; i < v.size() && v[i] * v[i] <= a; i++){
    if(a % v[i] == 0){
      int p = 0;
      while(a % v[i] == 0){
        p++;
        a /= v[i];
      }
      p++;
      sum *= p;
    }
  }
  if(a != 1) sum *= 2;
  return sum;
}
int main(){
  se();
  int a;
  scanf("%d", &a);
  printf("%d\n", fnc(a) - 1);
  return 0;
}
