#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  set<char> st;
  string s;
  cin >> s;
  for(int i = 0; i < s.size(); i++) st.insert(s[i]);
  printf("%s\n", (st.size() % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!");
  return 0;
}
