#include <bits/stdc++.h>
#define le 9
#define li 29
using namespace std;
int arr[le][le], arr1[li], p[le][li];
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, n, m, a;
  for(scanf("%d", &t); t--; ){
    for(int i = 0; i < le; i++){
      for(int j = 0; j < li; j++){
        arr1[j] = 0;
        p[i][j] = 0;
      }
    }
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        scanf("%d", &a);
        p[i][j] = a;
        if(a) arr1[j]++;
      }
    }
    bool f = true;
    for(int i = 0; i < m; i++) if(arr1[i] != 2){
      f = false;
      break;
    }
    if(!f) printf("No\n");
    else{
      for(int i = 0; i < le; i++) for(int j = 0; j < le; arr[i][j] = 0, j++);
      for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
          if(i != j){
            for(int k = 0; k < m; k++){
              if(p[i][k] && p[j][k]) arr[i][j]++;
            }
          }
        }
      }
      f = true;
      for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
          if(arr[i][j] > 1){
            f = false;
            break;
          }
        }
      }
      printf("%s\n", f ? "Yes" : "No");
    }
  }
  return 0;
}
