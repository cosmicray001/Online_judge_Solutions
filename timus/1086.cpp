#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    scanf("%d", &t);
    int n[165081], pos[15100];
    memset(n, 0, sizeof(n));
    int len = 165081;
    pos[1] = 2;

    for(int i = 4; i <= len; i += 2) n[i] = 1;
    int root = sqrt(len + 1);
    int c;
    for(int i = 3; i <= root; i += 2){

        for(int j = i * i; j <= len; j += i){
            if(n[j] == 0) n[j] = 1;
        }
    }
    for(int i = 3, c = 2; c <= 15003; i += 2){
        if(n[i] == 0){
            pos[c] = i;
            c++;
        }
    }
    /*for(int i = 1; i < 15002; i++) printf("%d\n", pos[i]);
    printf("%d\n", pos[1]);*/
    for(int i = 0; i < t; i++){
      int cal;
      scanf("%d", &cal);
      printf("%d\n", pos[cal]);
    }
    return 0;
}
