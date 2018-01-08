#include <bits/stdc++.h>

using namespace std;

int re_fnc(int a, int b)
{
    if(a > b) swap(a, b);
    if(a == 1) return b;
    else if(a == 2){
        if(b % 4 == 1) return b + 1;
        else if(b % 4 == 2) return b + 2;
        else if(b % 4 == 3) return b + 1;
        else if(b % 4 == 0) return b;
    }
    else{
        int x =(a * b) / 2;
        if(a * b % 2 != 0) x++;
        return x;
    }
}

int main()
{
    int t, c = 0;
    int x, y;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &x, &y);
        int ans = re_fnc(x, y);
        printf("Case %d: %d\n", ++c, ans);
    }

    return 0;
}
