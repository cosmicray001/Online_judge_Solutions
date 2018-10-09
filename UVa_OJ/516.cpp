#include <bits/stdc++.h>
#define le 32776
using namespace std;
int n[le >> 6];
vector<int> v;
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    v.push_back(2);
    for(int i = 3; i < le; i += 2) if(!ck(i)) v.push_back(i);
}
int main(){
    string s;
    while(getline(cin, s)){
        if(s[0] == '0' && s.size() == 1) break;
        for(int i = 0; i < s.size(); ){
            bool f = 0;
            while()
        }
    }

}
