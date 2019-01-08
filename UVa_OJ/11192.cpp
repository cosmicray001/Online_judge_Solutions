#include <bits/stdc++.h>
using namespace std;
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int a;
  char ch[103];
  while(scanf("%d", &a) != EOF && a){
    scanf("%s", ch);
    a = strlen(ch) / a;
    for(int i = 0; i < strlen(ch); i += a){
      for(int j = i + a - 1; j >= i; j--) printf("%c", ch[j]);
    }
    printf("\n");
  }
  return 0;
}
