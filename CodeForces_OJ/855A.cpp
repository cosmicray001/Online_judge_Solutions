#include <bits/stdc++.h>

using namespace std;

#define max_ve 110

string s[max_ve][2];

int main()
{
    int len;
    scanf("%d", &len);
    //int t = len;
    string dummy;
    getline(cin, dummy);
    //printf("NO\n");
    //while(t--){
        getline(cin, s[0][0]);
        printf("NO\n");
        for(int i = 1; i < len; i++){
            getline(cin, s[i][0]);
            bool sg = false;
            for(int j = 0; j < i; j++){
                if(s[i][0] == s[j][0]){
                    sg = true;
                    break;
                }
            }
            if(sg == true) printf("YES\n");
            else printf("NO\n");
        }
    //}

    return 0;
}
