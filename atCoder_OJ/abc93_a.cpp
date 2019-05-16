#include <bits/stdc++.h>
using namespace std;
int main(){
  int x = 0, y = 0, z = 0;
  char ch;
  for(int i = 0; i < 3; i++){
    cin >> ch;
    if(ch == 'a') x++;
    else if(ch == 'b') y++;
    else z++;
  }
  printf("%s\n", (x == 1 && y == 1 && z == 1) ? "Yes" : "No");
  return 0;
}
