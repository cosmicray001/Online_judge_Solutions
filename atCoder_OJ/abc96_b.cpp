#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int> v;
int main(){
  //freopen("input.txt", "r", stdin);
  int a;
  for(int i = 0; i < 3; i++){
    scanf("%d", &a);
    v.push_back(a);
  }
  sort(v.begin(), v.end());
  cin >> a;
  while(a--) v[2] = v[2] * 2;
  cout << v[0] + v[1] + v[2] << endl;
  return 0;
}
