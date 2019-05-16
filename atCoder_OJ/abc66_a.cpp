#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v;
  int a;
  for(int i = 0; i < 3; scanf("%d", &a), v.push_back(a), i++);
  sort(v.begin(), v.end());
  printf("%d\n", v[0] + v[1]);
  return 0;
}
