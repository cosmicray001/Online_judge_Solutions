#include <bits/stdc++.h>
using namespace std;
int main(){
  char ch, ch1;
  cin >> ch >> ch1;
  if(ch > ch1) printf(">\n");
  else if(ch == ch1) printf("=\n");
  else printf("<\n");
  return 0;
}
