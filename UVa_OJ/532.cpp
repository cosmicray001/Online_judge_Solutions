#include <bits/stdc++.h>
#define le 31
using namespace std;
bool vis[le][le][le];
int fx[6][3] = { { 1, 0, 0 }, { 0, 1, 0 }, { 0, 0, 1 }, { -1, 0, 0 }, { 0, -1, 0 }, { 0, 0, -1 } };
struct edge{
  int x, y, z;
};
bool comp(edge a, edge b){
  return a.x == b.x && a.y == b.y && a.z == b.z;
}
int main(){
  int xx, yy, zz;
  string s;
  while(scanf("%d %d %d", &xx, &yy, &zz) != EOF && (xx || yy || zz)){
    getline(cin, s);

  }
}
