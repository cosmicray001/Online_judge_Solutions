    #include <bits/stdc++.h>
    #define pi acos(-1.0)
     
    using namespace std;
     
    double fnc1(double ang, double r){
      double a = (ang * pi * pow(r, 2)) / 360;
      return a;
    }
     
    double fnc(double a, double b, double c){
      double ang = (b * b) + (c * c) - (a * a);
      ang = ang / (2 * b * c);
      ang = acos(ang);
      ang = ang * (180 / pi);
      return ang;
    }
     
    int main()
    {
      int t, co = 0;
      double r1, r2, r3;
      double a, b, c, x, y, z;
      double ta, ca;
      scanf("%d", &t);
      while(t--){
        scanf("%lf %lf %lf", &r1, &r2, &r3);
        a = r1 + r2;
        b = r2 + r3;
        c = r3 + r1;
        ta = (a + b + c) / 2;
        ta = sqrt(ta * (ta - a) * (ta - b) * (ta - c));
        x = fnc(a, b, c);
        y = fnc(b, c, a);
        z = fnc(c, a, b);
        ca = fnc1(y, r1);
        ca += fnc1(z, r2);
        ca += fnc1(x, r3);
        printf("Case %d: %.10lf\n", ++co, (ta - ca));
      }
     
      return 0;
    }
