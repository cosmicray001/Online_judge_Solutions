#include <bits/stdc++.h>
using namespace std;
int main(){
  char ch;
  int co = 0;
  for(int i = 0; i < 3; i++){
    scanf("%c", &ch);
    if(ch == 'o') co += 100;
  }
  cout << co + 700 << endl;
  return 0;
}
