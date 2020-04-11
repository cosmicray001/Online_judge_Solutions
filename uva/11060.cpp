#include <bits/stdc++.h>
#define le 102
using namespace std;
map<string, vector<string> > v;
map<string, int> in;
vector<string> ans;
vector<string> nn;
void bfs(){
  priority_queue<string> q;
  for(int i = 0; i < nn.size(); i++) if(in[nn[i]] == 0) q.push(nn[i]);
  while(!q.empty()){
    string p = q.top();
    q.pop();
    ans.push_back(p);
    for(int i = 0; i < v[p].size(); i++){
      string s = v[p][i];
      in[s]--;
      if(in[s] == 0) q.push(s);
    }
  }
}
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n, m, co = 0;
  string s, ss;
  while(scanf("%d", &n) != EOF){
    if(co) printf("\n");
    for(int i = 0; i < n; i++){
      cin >> s;
      nn.push_back(s);
    }
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
      cin >> s >> ss;
      in[ss]++;
      v[s].push_back(ss);
    }
    bfs();
    printf("Case #%d: Dilbert should drink beverages in this order: ", ++co);
    for(int i = 0; i < ans.size() - 1; i++) cout << ans[i] << " ";
    cout << ans[ans.size() - 1] << "." << endl;
    ans.clear();
    nn.clear();
    v.clear();
    in.clear();
  }
  return 0;
}
