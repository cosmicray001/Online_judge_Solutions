#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    string s;
    while(getline(cin, s) && s != "0"){
        int sum = 0, sum1 = 0;
        for(int i = 0; i < s.size(); sum += (s[i] - '0'), i += 2);
        for(int i = 1; i < s.size(); sum1 += (s[i] - '0'), i += 2);
        cout << s;
        printf(" %s a multiple of 11.\n", (abs(sum - sum1) == 0 || abs(sum - sum1) % 11 == 0) ? "is" : "is not");
    }
    return 0;
}
