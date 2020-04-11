#include <bits/stdc++.h>
#define le 3655
using namespace std;
bool ck[le];
int n[102];
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, d, p;
  for(scanf("%d", &t); t--; ){
    memset(ck, 0, sizeof(ck));
    scanf("%d %d", &d, &p);
    for(int i = 0; i < p; scanf("%d", &n[i]), i++);
    int sum = 0;
    for(int i = 0; i < p; i++){
      for(int j = n[i]; j <= d; j += n[i]){
        int a = (j % 7);
        if(a != 6 && a != 0 && ck[j] == false){
          sum++;
          ck[j] = true;
        }
      }
    }
    printf("%d\n", sum);
  }
  return 0;
}
