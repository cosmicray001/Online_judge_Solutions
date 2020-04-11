#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  set<string> st;
  string s, ch;
  while(cin >> s){
    ch = "";
    char c;
    for(int i = 0; i < s.size(); i++){
      if(s[i] >= 'a' && s[i] <= 'z') ch += s[i];
      else if(s[i] >= 'A' && s[i] <= 'Z'){
        c = s[i] - 'A' + 'a';
        ch += c;
      }
      else if(ch != ""){
        st.insert(ch);
        ch = "";
      }
    }
    if(ch != "") st.insert(ch);
  }
  for(set<string> :: iterator it = st.begin(); it != st.end(); cout << *it << endl, it++);
  return 0;
}
