#include <bits/stdc++.h>

using namespace std;

int fnc(int a, int b)
{
  return ((9 * a * a) + b * b);
}

int fnc1(int a, int b)
{
  return ((2 * a * a) + (25 * b * b));
}

int fnc2(int a, int b)
{
  return (- 100 * a + pow(b, 3));
}

int main()
{
  int t;
  int a, b;
  scanf("%d", &t);
  while(t--){
    scanf("%d %d", &a, &b);
    int x = fnc(a, b);
    int y = fnc1(a, b);
    int z = fnc2(a, b);
    if(x > y && x > z) printf("Rafael ganhou\n");
    else if(y > z && y > x) printf("Beto ganhou\n");
    else if(z > x && z > y) printf("Carlos ganhou\n");
  }
  
  return 0;
}
