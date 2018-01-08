#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a = 0, b = 0, c = 0, d = 0, e = 0, avg = 0, sum = 0;
    while(scanf("%lf %lf %lf %lf", &a, &b, &c, &d) == 4){
        int f = 1;
        sum = a * 2 + b * 3 + c * 4 + d * 1;
        avg = sum / 10.0;
        printf("Media: %0.1lf\n", avg);

        if(avg >= 7.0){
            printf("Aluno aprovado.\n");
        }
        else if(avg < 5.0){
            printf("Aluno reprovado.\n");
        }
        else if(avg >= 5.0 && avg <= 6.9){
            printf("Aluno em exame.\n");
            f = 0;
        }

        if(f == 0){
            scanf("%lf", &e);
            printf("Nota do exame: %0.1lf\n", e);
            avg = (avg + e) / 2.0;
            if(avg >= 5.0){
                printf("Aluno aprovado.\n");
            }
            else if(avg >= 4.9){
                printf("Aluno reprovado.\n");
            }

            printf("Media final: %0.1lf\n", avg);
        }

        return 0;
    }
}
