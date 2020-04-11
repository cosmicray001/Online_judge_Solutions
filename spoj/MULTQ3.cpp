#include <bits/stdc++.h>
#define le 400005
#define li 100005
using namespace std;
int arr[le], n[li];
int main(){
  int len, q, a, b, c;
  scanf("%d %d", &len, &q);
  vector<pair<int, int> > v;
  for(int i = 0; i < q; i++){
    scanf("%d %d %d", &c, &a, &b);
    if(c == 1) v.push_back(make_pair(a, b));
    for(int j = a; j <= b; n[j]++, b++);
  }
}
