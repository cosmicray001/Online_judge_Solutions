#include <bits/stdc++.h>

using namespace std;

int main()
{
  int num, temp;
  scanf("%d", &num);
  int n[4];
  for(int j = num + 1; ; j++){
    temp = j;
    for(int i = 0; temp > 0; temp /= 10, i++) n[i] = (temp % 10);
    if(n[0] != n[1] && n[0] != n[2] && n[0] != n[3] && n[1] != n[2] && n[1] != n[3] && n[2] != n[3]){
      printf("%d\n", j);
      break;
    }
  }
  
  return 0;
}
