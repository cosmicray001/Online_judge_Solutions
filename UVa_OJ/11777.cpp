#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0;
  for(scanf("%d", &t); t--; ){
    double sum = 0.0, a;
    for(int i = 0; i < 4; scanf("%lf", &a), sum += a, i++);
    vector<double> v;
    for(int i = 0; i < 3; scanf("%lf", &a), v.push_back(a), i++);
    sort(v.begin(), v.end());
    sum += ((v[1] + v[2]) / 2.0);
    printf("Case %d: ", ++co);
    if(sum >= 90) printf("A\n");
    else if(sum >= 80 && sum < 90) printf("B\n");
    else if(sum >= 70 && sum < 80) printf("C\n");
    else if(sum >= 60 && sum < 70) printf("D\n");
    else printf("F\n");
  }
  return 0;
}
