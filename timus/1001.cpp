#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector < double > v;
  double a;
  while(scanf("%lf", &a) != EOF){
    v.push_back(a);
  }
  int len = v.size();
  
  for(int i = len - 1; i >= 0; i--) printf("%.4lf\n", sqrt(v[i]));
  
  return 0;
}
