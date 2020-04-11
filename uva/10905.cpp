#include <bits/stdc++.h>
using namespace std;
bool comp(string a, string b){
  return (a + b) > (b + a);
}
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int a;
  while(scanf("%d", &a) != EOF && a){
    string s;
    vector<string> v;
    for(int i = 0; i < a; i++){
      cin >> s;
      v.push_back(s);
    }
    sort(v.begin(), v.end(), comp);
    for(int i = 0; i < v.size(); i++) cout << v[i];
    printf("\n");
  }
  return 0;
}
