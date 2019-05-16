#include <bits/stdc++.h>
using namespace std;
int n[4];
int main(){
  for(int i= 0; i < 3; i++){
    scanf("%d", &n[i]);
  }
  sort(n, n + 3);
  cout << (n[0] * n[1]) / 2 << endl;
  return 0;
}
