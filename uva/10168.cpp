#include <bits/stdc++.h>
#define le 10000007
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
int a, b, c, d;
void fnc(int num){
  for(int i = 0; i < v.size() && v[i] <= num; i++){
    for(int j = 0; j < v.size() && v[j] <= num - v[i]; j++){
      if(v[i] + v[j] == num){
        c = v[i];
        d = v[j];
        return;
      }
    }
  }
}
int main(){
  se();
  int num;
  while(scanf("%d", &num) != EOF){
    if(num < 8) printf("Impossible.\n");
    else if(num % 2 == 0){
      num -= 4;
      a = 2;
      b = 2;
      fnc(num);
      printf("%d %d %d %d\n", a, b, c, d);
    }
    else{
      num -= 5;
      a = 2;
      b = 3;
      fnc(num);
      printf("%d %d %d %d\n", a, b, c, d);
    }
  }
  return 0;
}
