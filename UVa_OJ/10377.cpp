#include <bits/stdc++.h>
#define le 62
using namespace std;
char n[le][le];
int r, c, a, b, ve;
void fnc(char ch){
  if(ch == 'R') ve = (ve + 90) % 360;
  else if(ch == 'L') ve = (ve + 360 - 90) % 360;
  else if(ch == 'F'){
    int py, px;
    if(ve == 0){
      px = b;
      py = a - 1;
    }
    else if(ve == 90){
      px = b + 1;
      py = a;
    }
    else if(ve == 180){
      px = b;
      py = a + 1;
    }
    else{
      px = b - 1;
      py = a;
    }
    if(py >= 0 && py < r && px >= 0 && px < c && n[py][px] != '*'){
      a = py;
      b = px;
    }
  }
}
char cpp(int x){
  if(x == 0) return 'N';
  else if(x == 90) return 'E';
  else if(x == 180) return 'S';
  return 'W';
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0;
  string s;
  for(scanf("%d", &t); t--; ){
    if(co++) printf("\n");
    cin >> r >> c;
    getchar();
    for(int i = 0; i < r; i++){
      getline(cin, s);
      for(int j = 0; j < c; j++) n[i][j] = s[j];
    }
    cin >> a >> b;
    a--;
    b--;
    ve = 0;
    getchar();
    while(getline(cin, s) && s.size() > 0){
      for(int i = 0; i < s.size(); i++){
        if(s[i] == 'R' || s[i] == 'L' || s[i] == 'F') fnc(s[i]);
        else if(s[i] == 'Q') printf("%d %d %c\n", a + 1, b + 1, cpp(ve));
      }
    }
  }
  return 0;
}
