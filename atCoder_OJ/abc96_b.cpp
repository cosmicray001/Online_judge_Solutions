#include <bits/stdc++.h>
using namespace std;
int main(){
  int n[4];
  for(int i = 0; i < 3; scanf("%d", &n[i]), i++);
  int t;
  cin >> t;
  while(t--) n[2] *= 2;
  cout << n[0] + n[1] + n[2] << endl;
  return 0;
}
