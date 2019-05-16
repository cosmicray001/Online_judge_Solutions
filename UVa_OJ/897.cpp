#include <bits/stdc++.h>
#define le 10000007
#define le1 100005
using namespace std;
int n[le >> 6];
bool arr[le];
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
  int rt = sqrt(le) + 1, k;
  for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
  arr[2] = true;
  for(int i = 3; i < le1; i += 2){
    if(!ck(i)){
      bool f = true;
      int temp = i;
      string s = "";
      for(; temp > 0; temp /= 10){
        if((temp % 10) % 2 == 0){
          f = false;
          break;
        }
        s += ((temp % 10) + '0');
      }
      if(f){
        bool f1 = true;
        sort(s.begin(), s.end());
        int ve = 0;
        for(int j = 0; j < s.size(); j++) ve = (ve * 10) + (s[j] - '0');
        if(ck(ve)) f1 = false;
        while(next_permutation(s.begin(), s.end()) && f1){
          ve = 0;
          for(int j = 0; j < s.size(); j++) ve = (ve * 10) + (s[j] - '0');
          if(ck(ve)){
            f1 = false;
            break;
          }
        }
        if(f1) arr[i] = true;

      }
    }
  }
}
int main(){
  se();
  int a;
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  while(scanf("%d", &a) != EOF && a){
    int len = 0, ans, temp = a;
    for(; temp > 0; temp /= 10) len = (len * 10) + 9;
    bool f = false;
    for(int i = a + 1; i < len + 1; i++){
      if(arr[i]){
        ans = i;
        f = true;
        break;
      }
    }
    printf("%d\n", f ? ans : 0);
  }
  return 0;
}
