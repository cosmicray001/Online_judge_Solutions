#include <bits/stdc++.h>
using namespace std;
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int t, co = 0, a, b, c, len;
  for(scanf("%d", &t); t--; ){
    map<int, int> mp;
    set<int> st1;
    set<int> st2;
    set<int> st3;
    scanf("%d", &len);
    while(len--){
      scanf("%d", &a);
      st1.insert(a);
      mp[a]++;
    }
    scanf("%d", &len);
    while(len--){
      scanf("%d", &a);
      if(!mp[a]){
        st2.insert(a);
        mp[a]++;
      }
      else st1.erase(a);
    }
    scanf("%d", &len);
    while(len--){
      scanf("%d", &a);
      if(!mp[a]) st3.insert(a);
      else if(st1.count(a)) st1.erase(a);
      else if(st2.count(a)) st2.erase(a);
    }
    a = st1.size();
    b = st2.size();
    c = st3.size();
    printf("Case #%d:\n", ++co);
    if(a >= b && a >= c){
      printf("1 %d", a);
      for(set<int> :: iterator it = st1.begin(); it != st1.end(); printf(" %d", (*it)), it++);
      printf("\n");
    }
    if(b >= c && b >= a){
      printf("2 %d", b);
      for(set<int> :: iterator it = st2.begin(); it != st2.end(); printf(" %d", (*it)), it++);
      printf("\n");
    }
    if(c >= a && c >= b){
      printf("3 %d", c);
      for(set<int> :: iterator it = st3.begin(); it != st3.end(); printf(" %d", (*it)), it++);
      printf("\n");
    }
  }
  return 0;
}
