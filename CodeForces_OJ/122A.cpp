#include <bits/stdc++.h>
using namespace std;
vector<int> v;
bool fnc(int a){
  for(; a > 0; a /= 10){
    int t = a % 10;
    if(t != 7 && t != 4) return false;
  }
  return true;
}
int main(){
  int a;
  scanf("%d", &a);
  for(int i = a; i > 0; i--) if(a % i == 0) v.push_back(i);
  for(int i = 0; i < v.size(); i++){
    if(fnc(v[i])){
      printf("YES\n");
      return 0;
    }
  }
  printf("NO\n");
  return 0;
}
