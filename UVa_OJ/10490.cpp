#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool arr[33];
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  arr[2] = arr[3] = arr[5] = arr[7] = arr[11] = arr[13] = arr[17] = arr[19] = arr[23] = arr[29] = arr[31] = true;
  int a;
  while(scanf("%d", &a) != EOF && a){
    if(arr[a]){
      if(a == 11 || a == 23 || a == 29) printf("Given number is prime. But, NO perfect number is available.\n");
      else{
        ll sum = pow(2, a - 1) * (pow(2, a) - 1);
        printf("Perfect: %lld!\n", sum);
      }
    }
    else printf("Given number is NOT prime! NO perfect number is available.\n");
  }
  return 0;
}
