#include<bits/stdc++.h>

using namespace std;

int main()
{
    double m = 0;
    while(scanf("%lf", &m) == 1){
        if(m >= 0 && m <= 400.00){
            double x = (m * 15) / 100.0;
            printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: %d %%\n", (m + x), x, 15);
        }

        else if(m >= 400.01 && m <= 800.00){
            double x = (m * 12) / 100.0;
            printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: %d %%\n", (m + x), x, 12);
        }

        else if(m >= 800.01 && m <= 1200.00){
            double x = (m * 10) / 100.0;
            printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: %d %%\n", (m + x), x, 10);
        }

        else if(m >= 1200.01 && m <= 2000.00){
            double x = (m * 7) / 100.0;
            printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: %d %%\n", (m + x), x, 7);
        }

        else if(m > 2000){
            double x = (m * 4) / 100.0;
            printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: %d %%\n", (m + x), x, 4);
        }
    }

    return 0;
}
