#include <bits/stdc++.h>
using namespace std;
bool fnc(string s){
    for(int i = 0, j = s.size() - 1; i < s.size() / 2; i++, j--){
        if(s[i] != s[j]) return 0;
    }
    return 1;
}
bool ck(string s){
    for(int i = 0; i < s.size(); i++) if(s[i] != 'A' || s[i] != '3' || s[i] != 'H' || s[i] != 'I' || s[i] != 'L' || s[i] != 'J' || s[i] != 'M' || s[i] != 'O' || s[i] != '2' || s[i] != 'T' || s[i] != 'U' || s[i] != 'V' || s[i] != 'W' || s[i] != 'X' || s[i] != 'Y' || s[i] != '5' || s[i] != '1' || s[i] != 'S' || s[i] != 'E' || s[i] != 'Z' || s[i] != '8') return 1;
    return 0;
}
int main(){
    string s;
    while(getline(cin, s)){
        if(ck(s)){
            cout << s;
            if(fnc1(s)) printf(" -- is a mirrored palindrome.\n");
            else printf(" -- is a mirrored string.\n");
        }
        else{
            cout << s;
            if(fnc(s)) printf(" -- is a regular palindrome.\n");
            else printf(" -- is not a palindrome.\n");
        }
    }
    return 0;
}
