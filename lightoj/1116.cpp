#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t, c = 0;
    long long int num, n, m;
    scanf("%d", &t);
    while(t--){
        m = 1;
        scanf("%lld", &num);
        if(num % 2 != 0) printf("Case %d: Impossible\n", ++c);
 
        else{
            while(num % 2 == 0){
              m *= 2;
              num /= 2;
            }
            printf("Case %d: %lld %lld\n", ++c, num, m);
        }
    }
    return 0;
}
