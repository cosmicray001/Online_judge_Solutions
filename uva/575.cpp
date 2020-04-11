#include <bits/stdc++.h>
#define le 40
#define ll long long int
using namespace std;
ll n[le];
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    for(int i = 0; i < 31; n[i] = (2 << i) - 1, i++);
    string s;
    while(getline(cin, s) && s != "0"){
        ll ans = 0;
        for(int i = s.size() - 1, k = 0; i >= 0; i--, k++){
            if(s[i] != '0') ans += (s[i] - '0') * n[k];
        }
        printf("%lld\n", ans);
    }
    return 0;
}
