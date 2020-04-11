#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){
  int x;
  for(int i = 0; i < 5; i++){
    scanf("%d", &x);
    v.push_back(x);
  }
  scanf("%d", &x);
  bool f = true;
  for(int i = 0; i < v.size() - 1; i++){
    for(int j = i + 1; j < v.size(); j++){
      if(abs(v[i] - v[j]) > x){
        f = false;
        break;
      }
    }
  }
  printf("%s\n", f ? "Yay!" : ":(");
  return 0;
}
