#include <bits/stdc++.h>
using namespace std;
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int t;
  string s;
  for(scanf("%d", &t), getchar(); t--; ){
    stack<char> st;
    getline(cin, s);
    if(!s.size()){
      printf("Yes\n");
      continue;
    }
    else if(s.size() % 2 != 0){
      printf("No\n");
      continue;
    }
    bool f = 1;
    for(int i = 0; i < s.size(); i++){
      if(s[i] == '(' || s[i] == '[') st.push(s[i]);
      else if(s[i] == ')' && !st.empty() && st.top() == '(') st.pop();
      else if(s[i] == ']' && !st.empty() && st.top() == '[') st.pop();
      else{
        f = 0;
        break;
      }
    }
    if(st.empty() && f) printf("Yes\n");
    else printf("No\n");
  }
  return 0;
}
