#include <bits/stdc++.h>
using namespace std;
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int t, sum = 0;
  map<string, int> mp;
  char ch[20], ch1[20];
  for(scanf("%d", &t); t--; ){
    scanf("%s %s", ch, ch1);
    mp[ch]++;
  }
  int maxx = 0;
  string s = "";
  for(map<string, int> :: iterator it = mp.begin(); it != mp.end(); it++){
    if(maxx < (*it).second){
      maxx = (*it).second;
      s = (*it).first;
    }
  }
  cout << s;
  printf(" Penguin\n");
  return 0;
}
