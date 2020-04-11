#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0;
  double a, sum;
  for(scanf("%d", &t); t--; ){
    sum = 0.0;
    for(int i = 0; i < 12; scanf("%lf", &a), sum += a, i++);
    sum /= 12.0;
    int x = (int) sum, c = 0;
    string s = "";
    for(; x > 0; x /= 10){
      c++;
      s += ((x % 10) + '0');
      if(c % 3 == 0 && x > 9) s += ',';
    }
    printf("%d $", ++co);
    sum = (sum - (int)sum) * 100;
    for(int i = s.size() - 1; i >= 0; printf("%c", s[i]), i--);
    if(sum < 10) printf(".0%.0lf\n", sum);
    else printf(".%.0lf\n", sum);
  }
  return 0;
}
