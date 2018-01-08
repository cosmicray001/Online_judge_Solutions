#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b, c, d, a1, b1, c1, d1;
  char ch[10];
  cin >> ch >> d >> a >> ch >> b >> ch >> c;
  cin >> ch >> d1 >> a1 >> ch >> b1 >> ch >> c1;
  
  
  if(c1 >= c) c = c1 - c;
  else{
    c = (c1 + 60 - c);
    b1--;
  }
  
  if(b1 >= b) b = b1 - b;
  else{
    b = (b1 + 60) - b;
    a1--;
  }
  
  if(a1 >= a) a = a1 - a;
  else{
    a = (a1 + 24) - a;
    d1--;
  }
  
  d = d1 - d;
  
  printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d, a, b, c);
  
  return 0;
}
