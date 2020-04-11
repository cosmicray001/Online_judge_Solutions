#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string s;
    scanf("%d", &t);
    getline(cin, s);
    while(t--){
        getline(cin, s);
        if((s[0] == 'o' && s[1] == 'n') || (s[1] == 'n' && s[2] == 'e') || (s[2] == 'e' && s[0] == 'o')) printf("1\n");
        else if((s[0] == 't' && s[1] == 'w') || (s[1] == 'w' && s[2] == 'o') || (s[2] == 'o' && s[0] == 't')) printf("2\n");
        else printf("3\n");
    }

    return 0;
}
