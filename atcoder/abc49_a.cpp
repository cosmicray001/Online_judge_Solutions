#include <bits/stdc++.h>
using namespace std;
bool fnc(char ch){
  return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int main(){
  char ch;
  scanf("%c", &ch);
  printf("%s\n", fnc(ch) ? "vowel" : "consonant");
  return 0;
}
