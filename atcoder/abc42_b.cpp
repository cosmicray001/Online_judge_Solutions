#include <bits/stdc++.h>
using namespace std;
vector<string> v;
int main(){
  //freopen("input.txt", "r", stdin);
  string s;
  int n, l;
  cin >> n >> l;
  while(n--){
    cin >> s;
    v.push_back(s);
  }
  sort(v.begin(), v.end());
  for(int i = 0; i < v.size(); i++) cout << v[i];
  printf("\n");
  return 0;
}
