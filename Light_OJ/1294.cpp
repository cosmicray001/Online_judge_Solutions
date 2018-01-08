
#include <bits/stdc++.h>
 
using namespace std;
 
long long int fnc(long long int n, long long int m)
{
  long long int x = n / 2;
  long long int ans = x * m;
  return ans;
}
 
int main()
{
  int t, c = 0;
  scanf("%d", &t);
  long long int m, n;
  while(t--){
    scanf("%lld %lld", &n, &m);
    long long int x = fnc(n, m);
    printf("Case %d: %lld\n", ++c, x);
  }
 
  return 0;
}
