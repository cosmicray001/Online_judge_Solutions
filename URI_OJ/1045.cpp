#include<bits/stdc++.h>

using namespace std;

int main()
{
    double n[3];
    int len = 3;

    for(int i = 0; i < len; i++){
        scanf("%lf", &n[i]);
    }

    for(int i = 0; i < len; i++){
      for(int j = i + 1; j < len; j++){
        if(n[i] < n[j]){
          double temp = n[i];
          n[i] = n[j];
          n[j] = temp;
        }

      }
    }

  //for(int i = 0; i < len; i++){
  //  printf("%0.2lf\n", n[i]);
  //}  

    double a = n[0], b = n[1], c = n[2];
    if(a >= b + c){
        printf("NAO FORMA TRIANGULO\n");
    }

    else if(pow(a, 2) == pow(b, 2) + pow(c, 2)){
        printf("TRIANGULO RETANGULO\n");
    }

    else if(pow(a, 2) > pow(b, 2) + pow(c, 2)){
        printf("TRIANGULO OBTUSANGULO\n");
    }

    else if(pow(a, 2) < pow(b, 2) + pow(c, 2)){
        printf("TRIANGULO ACUTANGULO\n");
    }

    if(a == b && b == c){
        printf("TRIANGULO EQUILATERO\n");
    }

    if( ((a == b) && b != c) || ((b == c) && c != a) || ((c == a) && a != b)){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}

