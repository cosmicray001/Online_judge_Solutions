#include <bits/stdc++.h>
#define le 102
using namespace std;
int main(){
  pair<int, pair<int, int> > p;
  p = make_pair(100, make_pair(200, 300));
  cout << p.first << endl;
  cout << p.second.first << endl;
  cout << p.second.second << endl;

}
