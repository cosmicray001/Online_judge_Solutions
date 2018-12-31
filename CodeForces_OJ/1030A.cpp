#include <bits/stdc++.h>
using namespace std;
int main(){
  int len, a;
  bool f = 0;
  scanf("%d", &len);
  for(int i = 0; i < len; i++){
    scanf("%d", &a);
    if(a) f = 1;
  }
  printf("%s\n", f ? "HARD" : "EASY");
  return 0;
}
