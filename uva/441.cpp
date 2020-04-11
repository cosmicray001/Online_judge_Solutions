#include <bits/stdc++.h>
#define le 14
using namespace std;
vector<int> v;
int n[le];
int main(){
  int len, a, co = 0;
  while(scanf("%d", &len) != EOF && len){
    if(co++) printf("\n");
    for(int i = 0; i < len; scanf("%d", &n[i]), i++);
    for(int i1 = 0; i1 < len - 5; i1++){
      v.clear();
      v.push_back(n[i1]);
      for(int i2 = i1 + 1; i2 < len - 4; i2++){
        v.push_back(n[i2]);
        for(int i3 = i2 + 1; i3 < len - 3; i3++){
          v.push_back(n[i3]);
          for(int i4 = i3 + 1; i4 < len - 2; i4++){
            v.push_back(n[i4]);
            for(int i5 = i4 + 1; i5 < len - 1; i5++){
              v.push_back(n[i5]);
              for(int i6 = i5 + 1; i6 < len; i6++){
                v.push_back(n[i6]);
                if(v.size() == 6){
                  for(int i = 0; i < v.size() - 1; printf("%d ", v[i]), i++);
                  printf("%d\n", v[v.size() - 1]);
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
