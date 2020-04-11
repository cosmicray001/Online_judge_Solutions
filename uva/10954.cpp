#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, x;
  while(scanf("%d", &t) != EOF && t){
    priority_queue<int, vector<int>, greater<int> > q;
    while(t--){
      scanf("%d", &x);
      q.push(x);
    }
    int sum = 0, a = 0;
    while(q.size() > 1){
      a = q.top();
      q.pop();
      a += q.top();
      sum += a;
      q.pop();
      q.push(a);
    }
    printf("%d\n", sum);
  }
  return 0;
}
