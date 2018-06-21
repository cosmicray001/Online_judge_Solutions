#include <bits/stdc++.h>
#define ll long long
using namespace std;
int fnc(string s){
    int len = s.size(), sum = 0;
    for(int i = 0; i < len; i++) sum += s[i] - '0';
    return sum;
}
int main(){
    int t;
    string s;
    for(scanf("%d", &t), getline(cin, s); t--; ){
        getline(cin, s);
        printf("%d\n", fnc(s));
    }
    return 0;
}
