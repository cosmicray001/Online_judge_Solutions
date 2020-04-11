#include <bits/stdc++.h>
using namespace std;
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int t, n, p, a;
  for(scanf("%d", &t); t--; ){
    priority_queue<int> pq;
    queue<pair<int, int> > q;
    scanf("%d %d", &n, &p);
    for(int i = 0; i < n; i++){
      scanf("%d", &a);
      pq.push(a);
      q.push(make_pair(a, i));
    }
    int co = 0;
    while(true){
      pair<int, int> ab = q.front();
      a = pq.top();
      if(a == ab.first){
        co++;
        if(ab.second == p) break;
        else{
          pq.pop();
          q.pop();
        }
      }
      else{
        q.pop();
        q.push(ab);
      }
    }
    printf("%d\n", co);
  }
  return 0;
}
