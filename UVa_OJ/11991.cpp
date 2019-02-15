#include <bits/stdc++.h>
#define le 1000006
using namespace std;
bool ck[le];
vector<int> v[le];
int main(){
  int len, q, a, b;
  while(scanf("%d%d", &len, &q) != EOF){
    memset(ck, false, sizeof(ck));
    for(int i = 1; i < len + 1; i++){
      scanf("%d", &a);
      ck[a] = true;
      v[a].push_back(i);
    }
    while(q--){
      scanf("%d%d", &a, &b);
      if(!ck[b] || v[b].size() < a) printf("0\n");
      else printf("%d\n", v[b][a - 1]);
    }
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
