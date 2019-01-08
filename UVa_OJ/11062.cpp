#include <bits/stdc++.h>
using namespace std;
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  set<string> st;
  string s, ch, s1;
  while(getline(cin, s)){
    for(int i = 0; i < s.size(); i++){
      if(s[i] >= 'a' && s[i] <= 'z') ch += s[i];
      else if(s[i] >= 'A' && s[i] <= 'Z') ch += (s[i] - 'A' + 'a');
      else if(s[i] == '-'){
        if(i != s.size() - 1) ch += s[i];
      }
      else if(ch != ""){
        st.insert(ch);
        ch = "";
      }
    }
    if(s[s.size() - 1] != '-' && ch != ""){
      st.insert(ch);
      ch = "";
    }
  }
  set<string> :: iterator it = st.begin();
  for( ; it != st.end(); cout << *it << endl, it++);
  return 0;
}
