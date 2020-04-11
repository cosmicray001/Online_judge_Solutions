#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t, len, len1, x;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &len, &len1);
        map<int, int> mp;
        for(int i = 0; i < len; scanf("%d", &x), mp[x]++, i++);
        for(int i = 0; i < len1; scanf("%d", &x), mp[x]--, i++);
        int ans = 0;
        map <int, int>::iterator it;
        for(it = mp.begin(); it != mp.end(); ans += abs((*it).second), it++);
        printf("%d\n", ans);
    }
    return 0;
}
