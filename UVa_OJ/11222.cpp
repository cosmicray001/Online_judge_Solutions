#include <bits/stdc++.h>
#define le 10004
using namespace std;
int n[le];
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, co = 0, len1, len2, len3, x;
    for(scanf("%d", &t); t--; ){
        for(int i = 0; i < le; n[i] = 0, i++);
        int a = 0, b = 0, c = 0;
        set<int> st1;
        set<int> st2;
        set<int> st3;
        set<int> :: iterator it;
        scanf("%d", &len1);
        for(int i = 0; i < len1; i++){
            scanf("%d", &x);
            st1.insert(x);
        }
        for(it = st1.begin(); it != st1.end(); n[*it]++, it++);
        scanf("%d", &len2);
        for(int i = 0; i < len2; scanf("%d", &x), st2.insert(x), i++);
        for(it = st1.begin(); it != st2.end(); n[*it]++, it++);
        scanf("%d", &len3);
        for(int i = 0; i < len3; scanf("%d", &x), st3.insert(x), i++);
        for(it = st3.begin(); it != st3.end(); n[*it]++, it++);
        int ans;
        if(c > a && c > b) ans = 3;
        else if(b > a && b > c) ans = 2;
        else ans = 1;
        printf("Case #%d:\n", ++co);
        if(ans == 1){
            printf("%d %d", ans, a);
            for(it = st1.begin(); it != st1.end(); it++){
                if(n[*it] == 1) printf(" %d", *it);
            }
            printf("\n");
        }
        else if(ans == 2){
            printf("%d %d", ans, b);
            for(it = st2.begin(); it != st2.end(); it++){
                if(n[*it] == 1) printf(" %d", *it);
            }
            printf("\n");
        }
        else{
            printf("%d %d", ans, c);
            for(it = st3.begin(); it != st3.end(); it++){
                if(n[*it] == 1) printf(" %d", *it);
            }
            printf("\n");
        }
    }
    return 0;
}
