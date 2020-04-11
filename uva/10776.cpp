#include <bits/stdc++.h>
using namespace std;
char ch[32];
int len;
vector<char> v;
void fnc(int idx, int r){
    if(idx == len){
        if(v.size() == r){
            for(int i = 0; i < r - 1; printf("%c", v[i]), i++);
            printf("%c\n", v[r - 1]);
        }
        /*if(v.size() == r){
            for(int i = r - 1; i > 0; printf("%c", v[i]), i--);
            printf("%c\n", v[0]);
        }*/
        return;
    }
    fnc(idx + 1, r);
    v.push_back(ch[idx]);
    fnc(idx + 1, r);
    v.pop_back();
}
int main(){
    int r;
    while(scanf("%s %d", ch, &r) != EOF){
        len = strlen(ch);
        //sort(ch, ch + len);
        fnc(0, r);
    }
    return 0;
}
