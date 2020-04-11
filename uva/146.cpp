#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  string s;
  while(cin >> s, s != "#"){
    if(next_permutation(s.begin(), s.end())) cout << s << endl;
    else printf("No Successor\n");
  }
  return 0;
}
