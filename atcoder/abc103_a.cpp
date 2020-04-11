#include <bits/stdc++.h>
using namespace std;
int main(){
  int n[4];
  vector<int> v;
  for(int i = 0; i < 3; i++) scanf("%d", &n[i]);
  for(int i = 0; i < 3 - 1; i++){
    for(int j = i + 1; j < 3; j++) v.push_back(abs(n[i] - n[j]));
  }
  sort(v.begin(), v.end());
  cout << v[0] + v[1] << endl;
  return 0;
}
