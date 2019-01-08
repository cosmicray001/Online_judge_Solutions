#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int k, y, x;
  while(scanf("%d", &k) != EOF){
    vector<pair<int, int> > v;
    for(int i = k + 1; i <= 2 * k; i++){
      if((k * i) % (i - k) == 0) v.push_back(make_pair((i * k) / (i - k), i));
    }
    printf("%d\n", v.size());
    for(int i = 0; i < v.size(); i++){
      printf("1/%d = 1/%d + 1/%d\n", k, v[i].first, v[i].second);
    }
  }
  return 0;
}
