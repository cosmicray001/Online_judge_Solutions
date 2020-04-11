#include <bits/stdc++.h>
using namespace std;
char fnc(char ch){
  if(ch == 'A') return 'T';
  else if(ch == 'T') return 'A';
  if(ch == 'C') return 'G';
  return 'C';
}
int main(){
  char ch;
  cin >> ch;
  cout << fnc(ch) << endl;
  return 0;
}
