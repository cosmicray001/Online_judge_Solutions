#include <bits/stdc++.h>
#define le 100000008
using namespace std;
int n[le >> 6];
vector<int> v;
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
}
bool pri(int a){
  if(a == 1) return 0;
  else if(a == 2 || (a % 2 != 0 && !ck(a))) return 1;
  return 0;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  se();
  int a;
  while(scanf("%d", &a) != EOF){
    if(a & 1){
      if(a == 1) printf("%d is not the sum of two primes!\n", 1);
      else if(pri(a - 2)) printf("%d is the sum of 2 and %d.\n", a, a - 2);
      else printf("%d is not the sum of two primes!\n", a);
    }
    else{
      bool f = true;
      for(int i = a / 2 - 1; i > 1; i--){
        if(pri(i) && pri(a - i)){
          printf("%d is the sum of %d and %d.\n", a, i, a - i);
          f = false;
          break;
        }
      }
      if(f) printf("%d is not the sum of two primes!\n", a);
    }
  }
  return 0;
}
