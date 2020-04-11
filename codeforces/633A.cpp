#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b, c;
  cin >> a >> b >> c;
  if(c % a == 0 || c % b == 0){
    printf("Yes\n");
    return 0;
  }
  else{
    for(int i = 1; i * b < c; i++){
      if((c - i * b) % a == 0){
        printf("Yes\n");
        return 0;
      }
    }
  }
  printf("No\n");
  return 0;
}
