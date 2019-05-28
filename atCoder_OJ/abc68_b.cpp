#include <bits/stdc++.h>
using namespace std;
int n[] = {1, 2, 4, 8, 16, 32, 64};
int main(){
  int a;
  cin >> a;
  for(int i = 6; i >= 0; i--){
    if(n[i] <= a){
      cout << n[i] << endl;
      return 0;
    }
  }
  return 0;
}
