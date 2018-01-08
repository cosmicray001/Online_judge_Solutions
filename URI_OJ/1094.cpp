#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    char ch;
    scanf("%d", &t);
    int total = 0, c = 0, r = 0, s = 0;
    while(t--){
        scanf("%d %c", &n, &ch);
        total += n;
        if(ch == 'C') c += n;
        else if(ch == 'R') r += n;
        else s += n;
    }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);

    double c1 = (c * 100.0) / total;
    double r1 = (r * 100.0) / total;
    double s1 = (s * 100.0) / total;

    printf("Percentual de coelhos: %.2lf %\n", c1);
    printf("Percentual de ratos: %.2lf %\n", r1);
    printf("Percentual de sapos: %.2lf %\n", s1);

    return 0;
}
