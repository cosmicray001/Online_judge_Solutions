#include <bits/stdc++.h>
using namespace std;
int n[] = {0, 1, 81};
map<int, string> mp2;
map<int, string> mp4;
map<int, string> mp6;
map<int, string> mp8;
void fnc2(){
  for(map<int, string> :: iterator it = mp2.begin(); it != mp2.end(); cout << (*it).second << endl, it++);
}
void fnc4(){
  for(map<int, string> :: iterator it = mp4.begin(); it != mp4.end(); cout << (*it).second << endl, it++);
}
void fnc6(){
  for(map<int, string> :: iterator it = mp6.begin(); it != mp6.end(); cout << (*it).second << endl, it++);
}
void fnc8(){
  for(map<int, string> :: iterator it = mp8.begin(); it != mp8.end(); cout << (*it).second << endl, it++);
}
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  mp2[0] = "00";
  mp2[1] = "01";
  mp2[2] = "81";

  mp4[0] = "0000";
  mp4[1] = "0001";
  mp4[2] = "2025";
  mp4[3] = "3025";
  mp4[4] = "9801";

  mp6[0] = "000000";
  mp6[1] = "000001";
  mp6[2] = "088209";
  mp6[3] = "494209";
  mp6[4] = "998001";

  mp8[0] = "00000000";
  mp8[1] = "00000001";
  mp8[2] = "04941729";
  mp8[3] = "07441984";
  mp8[4] = "24502500";
  mp8[5] = "25502500";
  mp8[6] = "52881984";
  mp8[7] = "60481729";
  mp8[8] = "99980001";

  int t;
  while(scanf("%d", &t) != EOF){
    if(t == 2) fnc2();
    else if(t == 4) fnc4();
    else if(t == 6) fnc6();
    else fnc8();
  }
  return 0;
}
