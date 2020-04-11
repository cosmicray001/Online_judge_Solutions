#include <bits/stdc++.h>
#define le 22
using namespace std;
int n[le], m[le], dp[le][le], len, mm[le], nn[le];
vector<int> temp;
bool vis[le][le];
int fnc(int i, int j){
  if(i == len || j == len) return 0;
  if(vis[i][j]) return dp[i][j];
  else{
    int ans = 0;
    if(n[i] == m[j]) ans = 1 + fnc(i + 1, j + 1);
    else ans = max(fnc(i + 1, j), fnc(i, j + 1));
    dp[i][j] = ans;
    vis[i][j] = true;
    return ans;
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  string s;
  int c = 0;
  while(getline(cin, s)){
    if(s.empty() || s.size() == 0) break;
    temp.clear();
    int a = 0, co = 0;
    for(int i = 0; i < s.size(); i++){
      if(s[i] == ' '){
        temp.push_back(a);
        a = 0;
      }
      else a = (a * 10) + (s[i] - '0');
    }
    if(a) temp.push_back(a);
    if(temp.size() == 1){
      c = 0;
      len = temp[0];
      continue;
    }
    else c++;
    if(c == 1) for(int i = 0; i < len; i++) m[temp[i] - 1] = i + 1;
    else{
      for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, j++);
      for(int i = 0; i < len; i++) n[temp[i] - 1] = i + 1;
      printf("%d\n", fnc(0, 0));
    }
  }
  return 0;
}
