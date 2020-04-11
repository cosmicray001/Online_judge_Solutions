#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
  cin >> a >> b;
  printf("%s\n", (max(a, b) <= 8) ? "Yay!" : ":(");
  return 0;
}
