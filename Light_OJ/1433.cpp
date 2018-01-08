    #include <bits/stdc++.h>
     
    using namespace std;
     
    double fnc1(double a, double b, double c){
      double ang = (b * b) + (c * c) - (a * a);
      ang /= (2 * b * c);
      ang = acos(ang);
      return ang;
    }
     
    double fnc(double x, double y, double a, double b){
      x = pow(abs(x - a), 2);
      y = pow(abs(y - b), 2);
      x = sqrt(x + y);
      return x;
    }
     
    int main()
    {
      int t, co = 0;
      double x, y, a, b, p, q;
      double i, j, k, s, ang;
      scanf("%d", &t);
      while(t--){
        scanf("%lf %lf %lf %lf %lf %lf", &x, &y, &a, &b, &p, &q);
        i = fnc(x, y, a, b);
        j = fnc(a, b, p, q);
        k = fnc(p, q, x, y);
        ang = fnc1(j, k, i);
        s = i * ang;
        printf("Case %d: %.10lf\n", ++co, s);
      }
     
      return 0;
    }
