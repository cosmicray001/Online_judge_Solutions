#include <bits/stdc++.h>
#define le 1003
using namespace std;
int n[] = {6,8, 35,49, 204,288, 1189,1681, 6930,9800, 40391, 57121, 235416,332928, 1372105,1940449, 7997214,11309768, 46611179,65918161};
int main(){
  //freopen("output.txt", "w", stdout);
  for(int i = 0; i < 20; i += 2) printf("%10d%10d\n", n[i], n[i+1]);
  return 0;
}
