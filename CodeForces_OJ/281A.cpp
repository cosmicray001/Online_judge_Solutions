#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  getline(cin, s);
  char ch[2];
  if(s[0] >= 'a' && s[0] <= 'z'){
    ch[0] = s[0] - 'a' + 'A';
    s[0] = ch[0];
  }
  cout << s << endl;
  
  return 0;
}
