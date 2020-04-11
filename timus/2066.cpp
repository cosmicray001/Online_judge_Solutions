#include <bits/stdc++.h>

using namespace std;

int fnc(int a, int b, int c){
    int ve = a + b + c;
    ve = min(ve, a + b - c);
    ve = min(ve, a + b * c);
    ve = min(ve, a - b + c);
    ve = min(ve, a - b - c);
    ve = min(ve, a - b * c);
    ve = min(ve, a * b + c);
    ve = min(ve, a * b - c);
    ve = min(ve, a * b * c);
    return ve;
}


int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int ve = fnc(a, b, c);
    printf("%d\n", ve);

    return 0;
}
