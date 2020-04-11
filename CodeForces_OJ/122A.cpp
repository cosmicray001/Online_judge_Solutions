#include <bits/stdc++.h>
using namespace std;
bool fnc(int a){
  for(; a > 0; a /= 10) if(a % 10 != 4 && a % 10 != 7) return false;
  return true;
}
int main(){
  int a;
  bool f = false;
  cin >> a;
  for(int i = 1; i < sqrt(a) + 1 && f == false; i++){
    if(a % i == 0){
      if(fnc(i)) f = true;
      if(fnc(a / i)) f = true;
    }
  }
  printf("%s\n", f ? "YES" : "NO");
  return 0;
}
