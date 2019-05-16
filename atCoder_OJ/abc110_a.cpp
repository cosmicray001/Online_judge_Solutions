#include <bits/stdc++.h>
using namespace std;
int main(){
  int n[4];
  for(int i = 0; i < 3; scanf("%d", &n[i]), i++);
  sort(n, n + 3);
  int a = 0;
  a = (a * 10) + n[2];
  a = (a * 10) + n[1];
  a += n[0];
  cout << a << endl;
  return 0;
}
