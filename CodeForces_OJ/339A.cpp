#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n[110];
    getline(cin, s);
    int len = s.size(), j = 0;
    for(int i = 0; i < len; i += 2, j++) n[j] = s[i] - '0';
    int len1 = (len / 2) + 1;
    sort(n, n + len1);
    for(int i = 0, j = 0; i < len; i += 2, j++) s[i] = n[j] + '0';
    cout << s << endl;

    return 0;
}
