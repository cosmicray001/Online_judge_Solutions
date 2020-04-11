#include <bits/stdc++.h>

using namespace std;

int n[110];

int main()
{
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d", &n[i]);
    }
    sort(n, n + t);
    int len2 = t / 2;
    int len1 = len2 - 1;
    bool f1 = false, f2 = false;
    if(t == 2){
        if(n[0] != n[1]) printf("YES\n%d %d\n", n[0], n[1]);
        else printf("NO\n");
    }
    else{
        for(int i = 1; i <= len1; i++){
            if(n[0] == n[i]) f1 = true;
            else{
                f1 = false;
                break;
            }
        }
        if(f1 == true){
            for(int i = len2 + 1; i < t; i++){
                if(n[len2] == n[i]) f2 = true;
                else{
                    f2 = false;
                    break;
                }
            }
        }
        if(f2 == true && n[0] != n[t - 1]){
            printf("YES\n%d %d\n", n[0], n[t - 1]);
        }
        else printf("NO\n");
    }

    return 0;
}
