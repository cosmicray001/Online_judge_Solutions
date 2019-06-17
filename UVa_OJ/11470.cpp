#include <bits/stdc++.h>
#define le 52
using namespace std;
int n[le][le];
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, len;
  while(scanf("%d", &len) != EOF && len){
    for(int i = 0; i < len; i++) for(int j = 0; j < len; scanf("%d", &n[i][j]), j++);
    t = (len + 1) / 2;
    printf("Case %d:", ++co);
    for(int l = 0; l < t; l++){
      int sum = 0;
      for(int i = l; i < len - l; i++){
        for(int j = l; j < len - l; ){
          sum += n[i][j];
          if(i == l || i == len - l - 1) j++;
          else{
            sum += n[i][len - l - 1];
            break;
          }
        }
      }
      printf(" %d", sum);
    }
    printf("\n");
  }
  return 0;
}
