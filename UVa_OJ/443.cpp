#include <bits/stdc++.h>
#define le 5842
#define ve 20000000000
#define ll long long int
using namespace std;
vector<ll> v;
void fnc(){
  ll sum = 0;
  for(int i = 0; i < 32; i++){
    sum = pow(2, i);
    if(sum <= ve){
      for(int j = 0; j < 21; j++){
        sum *= pow(3, j);
        if(sum <= ve){
          for(int k = 0; k < 15; k++){
            sum *= pow(5, k);
            if(sum <= ve){
              for(int l = 0; l < 13; l++){
                sum *= pow(7, l);
                if(sum <= ve) v.push_back(sum);
                else break;
              }
            }
            else break;
          }
        }
        else break;
      }
    }
    else break;
  }
  sort(v.begin(), v.end());
}
void ck(int a){
  a = a % 10;
  if(a == 1) printf("st");
  else if(a == 2) printf("nd");
  else if(a == 3) printf("rd");
  else printf("th");
}
int main(){
  fnc();
  int a;
  while(scanf("%d", &a) != EOF && a){
    printf("The %d", a);
    ck(a);
    printf(" humble number is %lld\n", v[a - 1]);
  }
  return 0;
}
