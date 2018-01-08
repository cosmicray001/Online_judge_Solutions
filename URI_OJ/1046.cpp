#include<bits/stdc++.h>

using namespace std;

int main()
{
    int st = 0, ed = 0;
    while(scanf("%d %d", &st, &ed) == 2){
        if(ed <= st){
            ed += 24;
        }
        printf("O JOGO DUROU %d HORA(S)\n", ed - st);
    }

    return 0;
}
