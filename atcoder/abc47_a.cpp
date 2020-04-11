#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v;
  for(int i = 0; i < 3; i++){
    int a;
    scanf("%d", &a);
    v.push_back(a);
  }
  sort(v.begin(), v.end());
  printf("%s\n", (v[0] + v[1] == v[2]) ? "Yes" : "No");
  return 0;
}
