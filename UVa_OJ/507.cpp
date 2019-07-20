#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, len, a;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &len);
    for(int i = 0; i < len - 1; scanf("%d", &a), v.push_back(a), i++);
    int g = v[0], m = v[0], sum = v[0];
    pair<int, int> p = make_pair(1, 2);
    pair<int, int> q = make_pair(1, 2);
    for(int i = 1; i < v.size(); i++){
      if(sum + v[i] >= v[i]){
        sum += v[i];
        q.second = i + 2;
      }
      else{
        sum = v[i];
        q = make_pair(i + 1, i + 2);
      }
      if(sum >= g){
        if(sum > g) p = make_pair(q.first, q.second);
        else if(sum == g && (q.second - q.first) > (p.second - p.first)) p = make_pair(q.first, q.second);
        g = sum;
      }
    }
    if(g > 0) printf("The nicest part of route %d is between stops %d and %d\n", ++co, p.first, p.second, g);
    else printf("Route %d has no nice parts\n", ++co);
    v.clear();
  }
  return 0;
}
