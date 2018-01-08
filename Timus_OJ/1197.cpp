#include <bits/stdc++.h>

using namespace std;

int fnc(char a){
    int re = a - 'a' + 1;
    return re;
}

int fnc1(int a, int b){
    int sum = 0;
    if(a + 2 >= 1 && a + 2 <= 8){
        if(b + 1 >= 1 && b + 1 <= 8) sum++;
        if(b - 1 >= 1 && b - 1 <= 8) sum++;
    }
    if(a - 2 >= 1 && a - 2 <= 8){
        if(b + 1 >= 1 && b + 1 <= 8) sum++;
        if(b - 1 >= 1 && b - 1 <= 8) sum++;
    }

    return sum;
}

int fnc2(int b, int a){
    int sum = 0;
    if(a + 2 >= 1 && a + 2 <= 8){
        if(b + 1 >= 1 && b + 1 <= 8) sum++;
        if(b - 1 >= 1 && b - 1 <= 8) sum++;
    }
    if(a - 2 >= 1 && a - 2 <= 8){
        if(b + 1 >= 1 && b + 1 <= 8) sum++;
        if(b - 1 >= 1 && b - 1 <= 8) sum++;
    }

    return sum;
}


int main()
{
    int t, sum, a, b;
    char ch[4];
    scanf("%d", &t);
    while(t--){
        scanf("%s", ch);
        a = fnc(ch[0]);
        b = ch[1] - '0';
        sum = fnc1(a, b);
        sum += fnc2(a, b);
        printf("%d\n", sum);
    }

    return 0;
}
