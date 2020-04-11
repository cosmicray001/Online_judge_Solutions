#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  string s = "";
  int len = 1;
  for(int i = 'a'; i <= 'z'; s = (char)i, mp[s] = len, len++, i++);
  for(int i = 'a'; i <= 'z' - 1; i++){
    for(int j = i + 1; j <= 'z'; j++){
      s = (char)i;
      s += (char)j;
      mp[s] = len;
      len++;
    }
  }
  for(int a = 'a'; a <= 'z' - 2; a++){
    for(int b = a + 1; b <= 'z' - 1; b++){
      for(int c = b + 1; c <= 'z'; c++){
        s = (char)a;
        s += (char)b;
        s += (char)c;
        mp[s] = len;
        len++;
      }
    }
  }
  for(int a = 'a'; a <= 'z' - 3; a++){
    for(int b = a + 1; b <= 'z' - 2; b++){
      for(int c = b + 1; c <= 'z' - 1; c++){
        for(int d = c + 1; d <= 'z'; d++){
          s = (char)a;
          s += (char)b;
          s += (char)c;
          s += (char)d;
          mp[s] = len;
          len++;
        }
      }
    }
  }
  for(int a = 'a'; a <= 'z' - 4; a++){
    for(int b = a + 1; b <= 'z' - 3; b++){
      for(int c = b + 1; c <= 'z' - 2; c++){
        for(int d = c + 1; d <= 'z' - 1; d++){
          for(int e = d + 1; e <= 'z'; e++){
            s = (char)a;
            s += (char)b;
            s += (char)c;
            s += (char)d;
            s += (char)e;
            mp[s] = len;
            len++;
          }
        }
      }
    }
  }
  char ch[7];
  while(scanf("%s", ch) != EOF){
    if(!mp[ch]) printf("0\n");
    else printf("%d\n", mp[ch]);
  }
  return 0;
}
