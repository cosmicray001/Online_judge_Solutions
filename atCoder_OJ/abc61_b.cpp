#include <bits/stdc++.h>
#define le 52
using namespace std;
int n[le];
int main(){
  //freopen("input.txt", "r", stdin);
  int len, m, a, b;
  cin >> len >> m;
  for(int i = 0; i < m; i++){
    cin >> a >> b;
    n[a]++;
    n[b]++;
  }
  for(int i = 1; i < len + 1; i++){
    cout << n[i] << endl;
  }
  return 0;
}
