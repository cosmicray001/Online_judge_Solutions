#include <bits/stdc++.h>

using namespace std;

int main()
{
    int len;
    string s;
    scanf("%d", &len);
    int t = len;
    getline(cin, s);
    getline(cin, s);
    int ss = 0, f = 0;
    for(int i = 1; i < len; i++){
        if(s[i - 1] != s[i]){
            if(s[i - 1] == 'S') ss++;
            else f++;
        }
    }

    printf("%s\n", ss > f ? "YES" : "NO");
    return 0;
}
