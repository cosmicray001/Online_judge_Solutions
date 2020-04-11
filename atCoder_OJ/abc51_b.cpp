#include <bits/stdc++.h>
using namespace std;
int main(){
  int k, s, co = 0;
  cin >> k >> s;
  for(int i = 0; i < k + 1; i++){
    for(int j = 0; j < k + 1 && i + j <= s; j++){
      if(s - i - j <= k) co++;
    }
  }
  cout << co << endl;
  return 0;
}
