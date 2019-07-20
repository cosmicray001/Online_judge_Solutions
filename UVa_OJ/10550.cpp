#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int i, a, b, c, temp, d;
  while(scanf("%d %d %d %d", &i, &a, &b, &c) != EOF && (i || a || b || c)){
    d = 1080;
    temp = i - a;
    if(temp < 0) temp += 40;
    d += (temp * 9);
    temp = b - a;
    if(temp < 0) temp += 40;
    d += (temp * 9);
    temp = b - c;
    if(temp < 0) temp += 40;
    d += (temp * 9);
    printf("%d\n", d);
  }
  return 0;
}
