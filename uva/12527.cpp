#include <bits/stdc++.h>
#define le 5003
using namespace std;
bool arr[le], ck[le];
bool fnc(int a){
  if(ck[a]) return arr[a];
  ck[a] = true;
  int temp = a, co = 0;
  set<int> st;
  for(; temp > 0; temp /= 10){
    co++;
    st.insert(temp % 10);
  }
  if(st.size() == co) arr[a] = true;
  return arr[a];
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int a, b;
  while(scanf("%d %d", &a, &b) != EOF){
    int sum = 0;
    for(int i = a; i <= b; i++){
      if(fnc(i)) sum++;
    }
    printf("%d\n", sum);
  }
  return 0;
}
