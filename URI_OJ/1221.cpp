#include <bits/stdc++.h>

using namespace std;

bool fnc(int n)
{
  if(n == 2) return 1;
  else if(n % 2 == 0) return 0;
  else{
    int rt = sqrt(n + 1);
    for(int i = 3; i <= rt; i += 2){
      if(n % i == 0) return 0;
    }
    return 1;
  }
}

int main()
{
  int t, n;
  scanf("%d", &t);
  while(t--){
    scanf("%d", &n);
    bool f = fnc(n);
    printf("%s\n", f ? "Prime" : "Not Prime");
  }
  
  return 0;
}
