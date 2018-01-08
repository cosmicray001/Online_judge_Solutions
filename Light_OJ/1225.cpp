#include <bits/stdc++.h>

using namespace std;

bool fnc(int n)
{
  int temp = n;
  int rev = 0;
  while(temp > 0){
    rev = (rev * 10) + (temp % 10);
    temp /= 10;
  }
  return rev == n;
}

int main()
{
  int t, c = 0, num;
  scanf("%d", &t);
  while(t--){
    scanf("%d", &num);
    bool f = fnc(num);
    printf("Case %d: %s\n", ++c, f ? "Yes" : "No");
  }
  
  return 0;
}
