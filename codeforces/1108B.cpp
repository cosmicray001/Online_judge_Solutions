#include <bits/stdc++.h>
#define le 130
using namespace std;
int n[le];
map<int, int> mp;
int main(){
  //freopen("input.txt", "r", stdin);
  int len, mx = -INT_MAX, mx1 = -INT_MAX;
  scanf("%d", &len);
  for(int i = 0; i < len; i++){
    scanf("%d", &n[i]);
    mx = max(mx, n[i]);
  }
  for(int i = 0; i < len; i++){
    mp[n[i]]++;
    if(mx % n[i] != 0 || mp[n[i]] > 1) mx1 = max(mx1, n[i]);
  }
  printf("%d %d\n", mx, mx1);
  return 0;
}
