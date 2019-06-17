#include <bits/stdc++.h>
#define le 300
using namespace std;
int n[le];
bool vis[le];
vector<pair<int, int> > v;
bool comp(pair<int, int> a, pair<int, int> b){
  if(a.first == b.first) return (a.second > b.second);
  if(a.first < b.first) return true;
  return false;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  string s;
  int co = 0;
  while(getline(cin, s)){
    if(co++) printf("\n");
    for(int i = 0; i < le; vis[i] = false, n[i] = 0, i++);
    for(int i = 0; i < s.size(); i++){
      int a = (int) s[i];
      vis[a] = true;
      n[a]++;
    }
    for(int i = 0; i < le; i++){
      if(vis[i]){
        v.push_back(make_pair(n[i], i));
      }
    }
    sort(v.begin(), v.end(), comp);
    for(int i = 0; i < v.size(); i++){
      printf("%d %d\n", v[i].second, v[i].first);
    }
    v.clear();
  }
  return 0;
}
