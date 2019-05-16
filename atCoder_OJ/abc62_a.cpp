#include <bits/stdc++.h>
using namespace std;
int main(){
  int p[14];
  p[1] = p[3] = p[5] = p[7] = p[8] = p[10] = p[12] = 1;
  p[4] = p[6] = p[9] = p[11] = 2;
  p[2] = 3;
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%s\n", (p[a] == p[b]) ? "Yes" : "No");
  return 0;
}
