#include<bits/stdc++.h>

using namespace std;

int main()
{
    int st_h = 0, ed_h = 0, st_m = 0, ed_m = 0;
    int x = 0, y = 0;

    while(scanf("%d %d %d %d", &st_h, &st_m, &ed_h, &ed_m) == 4){
        int i = 0;
        if(ed_h <= st_h){
            ed_h += 24;
        }
        x = ed_h - st_h;
        y = 60 + ed_m - st_m;
        for( ; y >= 60; y = y - 60){
            i++;
        }
        x = x + i;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", x - 1, y);
    }

    return 0;
}
