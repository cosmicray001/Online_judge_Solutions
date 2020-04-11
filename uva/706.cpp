#include <bits/stdc++.h>
using namespace std;
void li(int len){
    printf(" ");
    for(int i = 0; i < len; printf("-"), i++);
    printf(" ");
}
void nli(int len){
    for(int i = 0; i < len + 2; printf(" "), i++);
}
void b(int len){
    printf("|");
    for(int i = 0; i < len; printf(" "), i++);
    printf("|");
}
void r(int len){
    printf(" ");
    for(int i = 0; i < len; printf(" "), i++);
    printf("|");
}
void l(int len){
    printf("|");
    for(int i = 0; i < len; printf(" "), i++);
    printf(" ");
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    char ch[12];
    while(scanf("%d", &t) != EOF && t){
        scanf("%s", ch);
        int len = strlen(ch);
        for(int i = 0; i < len; i++){
            if(i) printf(" ");
            if(ch[i] == '1' || ch[i] == '4') nli(t);
            else li(t);
        }
        printf("\n");
        for(int i = 0; i < t; i++){
            for(int j = 0; j < len; j++){
                if(j) printf(" ");
                if(ch[j] == '5' || ch[j] == '6') l(t);
                else if(ch[j] == '0' || ch[j] == '9' || ch[j] == '8' || ch[j] == '4') b(t);
                else r(t);
            }
            printf("\n");
        }
        for(int i = 0; i < len; i++){
            if(i) printf(" ");
            if(ch[i] == '1' || ch[i] == '7' || ch[i] == '0') nli(t);
            else li(t);
        }
        printf("\n");
        for(int i = 0; i < t; i++){
            for(int j = 0; j < len; j++){
                if(j) printf(" ");
                if(ch[j] == '2') l(t);
                else if(ch[j] == '0' || ch[j] == '8' || ch[j] == '6') b(t);
                else r(t);
            }
            printf("\n");
        }
        for(int i = 0; i < len; i++){
            if(i) printf(" ");
            if(ch[i] == '1' || ch[i] == '7' || ch[i] == '4') nli(t);
            else li(t);
        }
        printf("\n\n");
    }
}
