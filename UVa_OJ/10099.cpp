#include <bits/stdc++.h>
#define le 102
using namespace std;
int n[le][le];
bool ck(int i, int j, int r, int c){
  if(i >= 0 && i < r && j >= 0 && j < c && n[i][j] == 1) return true;
  return false;
}
void flood_fill(int i, int j, int r, int c){
  n[i][j] = 0;
  if(ck(i, j + 1, r, c)) flood_fill(i, j + 1, r, c);
  if(ck(i, j - 1, r, c)) flood_fill(i, j - 1, r, c);
  if(ck(i - 1, j, r, c)) flood_fill(i - 1, j, r, c);
  if(ck(i + 1, j, r, c)) flood_fill(i + 1, j, r, c);
}
int main(){
  freopen("input.txt", "r", stdin);
  int r, c;
  scanf("%d %d", &r, &c);
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      scanf("%d", &n[i][j]);
    }
  }
  int co = 0;
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      if(n[i][j] == 1){
        co++;
        flood_fill(i, j, r, c);
      }
    }
  }
  printf("%d\n", co);
  return 0;
}
