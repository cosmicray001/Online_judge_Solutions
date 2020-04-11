#include <bits/stdc++.h>
#define le 102
using namespace std;
map<string, vector<string> > v;
map<string, vector<string> > w;
map<string, bool> vis, ck;
vector<string> ve, st, ans;
set<string> stt;
void dfs(string a){
  vis[a] = true;
  for(int i = 0; i < v[a].size(); i++){
    string e = v[a][i];
    if(!vis[e]) dfs(e);
  }
  st.push_back(a);
}
void dfs1(string a){
  vis[a] = true;
  for(int i = 0; i < w[a].size(); i++){
    string e = w[a][i];
    if(!vis[e]) dfs1(e);
  }
  ans.push_back(a);
}
void clr(){
  v.clear();
  w.clear();
  vis.clear();
  ck.clear();
  ve.clear();
  st.clear();
  ans.clear();
  stt.clear();
}
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int len;
  string a, b, s;
  while(scanf("%d", &len) != EOF && len){
    getchar();
    for(int i = 0; i < len; i++){
      getline(cin, s);
      stringstream ss(s);
      ss >> a;
      ve.push_back(a);
      while(ss >> b){
        v[a].push_back(b);
        w[b].push_back(a);
      }
    }
    vis.clear();
    for(int i = 0; i < ve.size(); i++){
      if(!vis[ve[i]]) dfs(ve[i]);
    }
    vis.clear();
    for(int i = st.size() - 1; i >= 0; i--){
      if(!vis[st[i]]){
        ans.clear();
        dfs1(st[i]);
        if(ans.size() > 1){
          for(int i = 0; i < ans.size(); i++) ck[ans[i]] = true;
        }
      }
    }
    for(int i = 0; i < ve.size(); i++){
      if(ck[ve[i]]) stt.insert(ve[i]);
      else{
        for(int j = 0; j < v[ve[i]].size(); j++){
          string e = v[ve[i]][j];
          if(ck[e]){
            ck[ve[i]] = true;
            stt.insert(ve[i]);
            break;
          }
        }
      }
    }
    printf("%d\n", stt.size());
    int co = 0;
    for(set<string> :: iterator it = stt.begin(); it != stt.end(); it++){
      if(co++ != 0) printf(" ");
      cout << (*it);
    }
    printf("\n");
    clr();
  }
  return 0;
}
