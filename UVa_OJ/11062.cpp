#include <bits/stdc++.h>
using namespace std;
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  set<string> st;
  string s, ch;
  while(cin >> s){
    for(int i = 0; i < s.size() - 1; i++){
      if(s[i] >= 'a' && s[i] <= 'z') ch += s[i];
      else if(s[i] >= 'A' && s[i] <= 'Z'){
        s[i] = s[i] - 'A' + 'a';
        ch += s[i];
      }
      else if(s[i] == '-') ch += s[i];
      else if(ch != ""){
        st.insert(ch);
        ch = "";
      }
    }
    int p = s.size() - 1;
    if(s[p] >= 'a' && s[p] <= 'z'){
      ch += s[p];
      st.insert(ch);
      ch = "";
    }
    else if(s[p] >= 'A' && s[p] <= 'Z'){
      s[p] = s[p] - 'A' + 'a';
      ch += s[p];
      st.insert(ch);
      ch = "";
    }
    else if(s[p] == '-'){
      //
    }
    else ch = "";
  }
  for(set<string> :: iterator it = st.begin(); it != st.end(); cout << *it << endl, it++);
  return 0;
}
