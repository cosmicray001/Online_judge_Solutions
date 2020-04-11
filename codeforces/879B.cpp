#include <bits/stdc++.h>

using namespace std;

int main()
{
  int len;
  int n[510];
  long long int k, c = 0;
  scanf("%d %lld", &len, &k);
  for(int i = 0; i < len; i++) scanf("%d", &n[i]);
  int max_ve = n[0], temp = n[0];
  bool f = false;
  for(int i = 1; i < len; i++){
    if(max_ve < n[i]){
      max_ve = n[i];
      c = 1;
    }
    if(temp == max_ve) f = true;
    else{
      temp = max_ve;
      f = false;
    }
    if(f) c++;
    else c = 1;
    if(c == k) break;
  }
  printf("%d\n", max_ve);

  return 0;
}
