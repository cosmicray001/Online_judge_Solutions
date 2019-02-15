#include <bits/stdc++.h>
#define le 402
using namespace std;
map<string, vector<string> > mp;
bool ck(string a, string b){
  int co = 0;
  for(int i = 0; i < a.size(); i++) if(a[i] != b[i]) co++;
  return co == 1;
}
map<string, bool> vis;
map<string, int> len;
void bfs(string s){
  vis.clear();
  len.clear();
  vis[s] = true;
  len[s] = 0;
  queue<string> q;
  q.push(s);
  while(!q.empty()){
    s = q.front();
    q.pop();
    for(int i = 0; i < mp[s].size(); i++){
      string e = mp[s][i];
      if(!vis[e]){
        vis[e] = true;
        len[e] = len[s] + 1;
        q.push(e);
      }
    }
  }
}
bool fnc(string s){
  stringstream ss(s);
  int co = 0;
  string s1;
  while(ss >> s1) co++;
  if(co == 2) return false;
  return 1;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0;
  char ch[12];
  for(scanf("%d", &t); t--; ){
    if(co++) printf("\n");
    vector<string> v;
    while(scanf("%s", ch) != EOF && ch[0] != '*'){
      v.push_back(ch);
    }
    for(int i = 0; i < v.size(); i++){
      for(int j = 0; j < v.size(); j++){
        if(i != j){
          string a = v[i], b = v[j];
          if(a.size() ==  b.size() && ck(a, b)){
            mp[a].push_back(b);
            mp[b].push_back(a);
          }
        }
      }
    }
    string s, s1;
    getchar();
    while(getline(cin, s)){
      if(fnc(s)) break;
      stringstream ss(s);
      ss >> s >> s1;
      bfs(s);
      cout << s << " " << s1 << " " << len[s1] << endl;
    }
    mp.clear();
  }
  return 0;
}
