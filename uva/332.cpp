#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int j, k, a, b, co = 0;
  string s;
  while(scanf("%d", &j) != EOF  && j != -1){
    cin >> s;
    k = s.size() - 2 - j;
    bool f = false;
    if(!j){
      swap(j, k);
      f = true;
    }
    a = b = 0;
    for(int i = 2; i < s.size(); i++) a = (a * 10) + (s[i] - '0');
    for(int i = 0, j = 2; i < k; i++, j++) b = (b * 10) + (s[j] - '0');
    a -= b;
    if(f) b = pow(10, j);
    else b = pow(10, j + k) - pow(10, k);
    k = __gcd(a, b);
    a /= k;
    b /= k;
    printf("Case %d: %d/%d\n", ++co, a, b);
  }
  return 0;
}
