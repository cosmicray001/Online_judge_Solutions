#include <bits/stdc++.h>

using namespace std;

int main()
{
    double i = 0.0;
    for(int sg = 1; i <= 2; i += .2, sg++){
        int c = 3;
        double j = 1.0;
        while(c--){
            if(sg == 1 || sg == 6 || sg == 11){
                printf("I=%.0lf J=%.0lf\n", i, j + i);
                j++;
            }
            else{
                printf("I=%.1lf J=%.1lf\n", i, j + i);
                j++;
            }
        }
    }
}
