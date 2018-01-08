#include <bits/stdc++.h>

using namespace std;

int fnc(char s)
{
  switch(s){
    case '1':
      return 2;
      break;
    case '2':
      return 5;
      break;
    case '3':
      return 5;
      break;
    case '4':
      return 4;
      break;
    case '5':
      return 5;
      break;
    case '6':
      return 6;
      break;
    case '7':
      return 3;
      break;
    case '8':
      return 7;
      break;
    case '9':
      return 6;
      break;
    case '0':
      return 6;
      break;
  }
}

int main()
{
  int t;
  string s;
  scanf("%d", &t);
  getline(cin, s);
  while(t--){
    getline(cin, s);
    int c = 0;
    int len = s.size();
    for(int i = 0; i < len; i++) c += fnc(s[i]);
    printf("%d leds\n", c);
  }
  return 0;
}
