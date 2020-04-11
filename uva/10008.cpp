#include <bits/stdc++.h>
#define le 93
using namespace std;
vector<pair<char, int> > v;
int n[le];
bool comp(pair<char, int> a, pair<char, int> b){
  if(a.second == b.second) return a.first < b.first;
  return a.second > b.second;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t;
  string s;
  for(scanf("%d", &t), getchar(); t--; ){
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
      if(s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 'a' + 'A';
      if(s[i] >= 'A' && s[i] <= 'Z') n[s[i]]++;
    }
  }
  for(int i = 'A'; i < 'Z' + 1; i++){
    if(n[i] > 0) v.push_back(make_pair(i, n[i]));
  }
  sort(v.begin(), v.end(), comp);
  for(int i = 0; i < v.size(); i++) printf("%c %d\n", v[i].first, v[i].second);
  return 0;
}
