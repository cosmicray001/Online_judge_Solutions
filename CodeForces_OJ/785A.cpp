#include <bits/stdc++.h>

using namespace std;

int main()
{ 
    int t;
    string s;
    scanf("%d", &t);
    getline(cin, s);
    int sum = 0;
    while(t--){
      
      getline(cin, s);
      if(s == "Tetrahedron") sum += 4;
      else if(s == "Cube") sum += 6;
      else if(s == "Octahedron") sum += 8;
      else if(s == "Dodecahedron") sum += 12;
      else if(s == "Icosahedron") sum += 20;
      
    }
    printf("%d\n", sum);
    
    return 0;
}
