#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, a;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &a);
        if(a < 10) printf("%d\n", a);
        else{
            for(int i = 9; i > 1; i--){
                if(a % i == 0){
                    while(a % i == 0){
                        v.push_back(i);
                        a /= i;
                    }
                }
            }
            if(a != 1) printf("-1\n");
            else{
                sort(v.begin(), v.end());
                for(int i = 0; i < v.size() - 1; printf("%d", v[i]), i++);
                printf("%d\n", v[v.size() - 1]);
            }
            v.clear();
        }
    }
    return 0;
}
