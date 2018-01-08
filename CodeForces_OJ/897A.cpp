#include <bits/stdc++.h>

using namespace std;

int main()
{
  int len, le;
  string s;
  int a, b;
  scanf("%d %d", &len, &le);
  getline(cin, s);
  getline(cin, s);
  char ch, ch1;
  while(le--){
    scanf("%d %d %c %c", &a, &b, &ch, &ch1);
    for(int i = a - 1; i <= b - 1; i++){
      if(s[i] == ch){
        s[i] = ch1;
      }
    }
    
  }
  cout << s << endl;
  
  return 0;
}
