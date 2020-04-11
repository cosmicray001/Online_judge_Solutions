#include <bits/stdc++.h>
#define le 150
using namespace std;
vector<pair<int, int> > v;
int n[le];
bool vis[le];
bool comp(pair<int, int> a, pair<int, int> b){
  if(a.first == b.first) return a.second < b.second;
  if(a.first > b.first) return true;
  return false;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t;
  string s;
  for(scanf("%d", &t), getchar(); t--; ){
    for(int i = 0; i < le; vis[i] = false, n[i] = 0, i++);
    getline(cin, s);
    int m = -1;
    for(int i = 0; i < s.size(); i++){
      if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] - 'A' + 'a';
        int a = (int)s[i];
        vis[a] = true;
        n[a]++;
        m = max(m, n[a]);
      }
    }
    for(int i = 0; i < le; i++){
      if(vis[i]) v.push_back(make_pair(n[i], i));
    }
    sort(v.begin(), v.end(), comp);
    for(int i = 0; i < v.size(); i++){
      if(v[i].first != m) break;
      printf("%c", v[i].second);
    }
    printf("\n");
    v.clear();
  }
  return 0;
}
