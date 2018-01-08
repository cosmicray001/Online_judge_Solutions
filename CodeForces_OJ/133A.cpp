#include <bits/stdc++.h>

using namespace std;

int main()
{
  char ch[110];
  scanf("%s", &ch);
  int len = strlen(ch);
  bool f = false;
  for(int i = 0; i < len; i++){
    if(ch[i] == 'H' || ch[i] == 'Q' || ch[i] == '9')
    {
      f = true;
      break;
    }
  }
  if(f == false) printf("NO\n");
  else printf("YES\n");
  
  return 0;
}
