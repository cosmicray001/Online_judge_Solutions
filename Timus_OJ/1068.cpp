#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    if(n >= 1){
        for(int i = n; i >= 1; i--) sum += i;
    }
    else{
        for(int i = n; i <= 1; i++) sum += i;
    }
    printf("%d\n", sum);

    return 0;
}
