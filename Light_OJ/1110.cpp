#include <bits/stdc++.h>
#define le 3003
using namespace std;
string a, b, s, ss;
bool vis[le][le];
int dis[le][le];
int fnc(int i, int j){
  if(i == a.size() || j == b.size()) return 0;
  if(vis[i][j]) return dis[i][j];
  int ans = 0;
  if(a[i] == b[j]) ans = 1 + fnc(i + 1, j + 1);
  else ans = max(fnc(i + 1, j), fnc(i, j + 1));
  dis[i][j] = ans;
  vis[i][j] = true;
  return dis[i][j];
}
void pri(int i, int j){
  if(i == a.size() || j == b.size()){
    if(ss == "") ss = s;
    else if(ss > s) ss = s;
    return;
  }
  if(a[i] == b[j]){
    s += a[i];
    pri(i + 1, j + 1);
    s.erase(s.size() - 1);
  }
  else{
    if(dis[i + 1][j] > dis[i][j + 1]) pri(i + 1, j);
    else pri(i, j + 1);
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0;
  //for(scanf("%d", &t); t--; ){
    for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, dis[i][j] = 0, j++);
    cin >> a >> b;
    int x = fnc(0, 0);
    //printf("Case %d: ", ++co);
    if(x > 0){
      ss = s = "";
      pri(0, 0);
      cout << ss << endl;
    }
    else cout << " \n";
  //}
  return 0;
}
