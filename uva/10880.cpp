#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, c, r, d;
  for(scanf("%d", &t); t--; ){
    printf("Case #%d:", ++co);
    scanf("%d %d", &c, &r);
    if(c == r){
      printf(" 0\n");
      continue;
    }
    set<int> st;
    d = c - r;
    for(int i = 1; i * i <= d; i++){
      if(d % i == 0){
        st.insert(d / i);
        st.insert(i);
      }
    }
    for(set<int> :: iterator it = st.begin(); it != st.end(); it++){
      if(*it > r) printf(" %d", *it);
    }
    printf("\n");
  }
  return 0;
}
