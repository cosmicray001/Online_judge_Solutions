#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  double a, b;
  int c = 0;
  while(getline(cin, s)){
    scanf("%lf", &a);
    b += a;
    c++;
    getline(cin, s);
  }
  double x = b / c;
  printf("%.1lf\n", x);
  
  return 0;
}
