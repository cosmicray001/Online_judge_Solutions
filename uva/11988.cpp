#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    string s;
    while(cin >> s){
        list<char> li;
        int f = 4;
        list<char> :: iterator it = li.begin();
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '[') f = 0;
            else if(s[i] == ']') f = 2;
            else if(f == 0){
                //li.push_front(s[i]);
                it = li.begin();
                li.insert(it, s[i]);
                //it++;
                f = 1;
            }
            else if(f == 1){
                cout << addressof(*it) << " ";
                li.insert(it, s[i]);
                cout << &(*it) << endl;
            }
            else li.push_back(s[i]);
        }
        for(it = li.begin(); it != li.end(); it++) cout << (*it);
        printf("\n");
        li.clear();
    }
    return 0;
}
