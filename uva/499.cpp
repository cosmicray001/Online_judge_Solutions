#include <bits/stdc++.h>
#define le 130
using namespace std;
int n[le];
vector<pair<char, int> > v;
bool comp(pair<char, int> a, pair<char, int> b){
  if(a.second > b.second) return true;
  if(a.second == b.second) return a.first < b.first;
  return false;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  string s;
  while(getline(cin, s)){
    //cout << s << endl;
    for(int i = 0; i < le; n[i] = 0, i++);
    for(int i = 0; i < s.size(); i++){
      if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >='A' && s[i] <= 'Z')) n[s[i]]++;
    }
    for(int i = 'a'; i < 'z' + 1; i++) if(n[i] > 0) v.push_back(make_pair(i, n[i]));
    for(int i = 'A'; i < 'Z' + 1; i++) if(n[i] > 0) v.push_back(make_pair(i, n[i]));
    sort(v.begin(), v.end(), comp);
    int x = -1;
    if(v.size()) x = v[0].second;
    bool f = false;
    for(int i = 0; i < v.size(); i++){
      if(v[i].second == x) printf("%c", v[i].first);
      f = true;
    }
    if(f) printf(" %d\n", x);
    v.clear();
  }
  return 0;
}
