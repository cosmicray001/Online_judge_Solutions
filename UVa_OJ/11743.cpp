#include <bits/stdc++.h>
using namespace std;
int fnc(int a){
  a *= 2;
  int sum = 0;
  for(; a > 0; a /= 10) sum = sum + (a % 10);
  return sum;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t;
  string s, s1, s2, s3;
  for(scanf("%d", &t); t--; ){
    cin >> s >> s1 >> s2 >> s3;
    int co = (s[1] - '0') + (s[3] - '0') + (s1[1] - '0') + (s1[3] - '0') + (s2[1] - '0') + (s2[3] - '0') + (s3[1] - '0') + (s3[3] - '0');
    int so = fnc(s[0] - '0') + fnc(s[2] - '0') + fnc(s1[0] - '0') + fnc(s1[2] - '0') + fnc(s2[0] - '0') + fnc(s2[2] - '0') + fnc(s3[0] - '0') + fnc(s3[2] - '0');
    printf("%s\n", ((co + so) % 10 == 0) ? "Valid" : "Invalid");
  }
  return 0;
}
