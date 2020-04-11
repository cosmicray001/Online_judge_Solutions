#include <bits/stdc++.h>
using namespace std;
int main(){
  set<int> st;
  int a;
  for(int i = 0; i < 3; i++){
    scanf("%d", &a);
    st.insert(a);
  }
  printf("%d\n", st.size());
  return 0;
}
