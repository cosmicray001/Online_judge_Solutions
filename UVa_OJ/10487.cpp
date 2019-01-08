#include <bits/stdc++.h>
#define le 1003
using namespace std;
int n[le];
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int t, co = 0, m, a;
  while(scanf("%d", &t) != EOF && t){
    for(int i = 0; i < t; scanf("%d", &n[i]), i++);
    sort(n, n + t);
    scanf("%d", &m);
    printf("Case %d:\n", ++co);
    while(m--){
      int mn = INT_MAX, ve;
      scanf("%d", &a);
      for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
          if(i != j){
            int sum = n[i] + n[j];
            if(mn > abs(a - sum)){
              mn = abs(a - sum);
              ve = sum;
            }
          }
        }
      }
      printf("Closest sum to %d is %d.\n", a, ve);
    }
  }
  return 0;
}
