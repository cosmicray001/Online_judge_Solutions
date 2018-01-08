#include <bits/stdc++.h>

using namespace std;

string re(string s1, string s2, string s3)
{
    if(s1 == "vertebrado"){
        if(s2 == "ave"){
            if(s3 == "carnivoro") return "aguia";
            else return "pomba";
        }
        else if(s3 == "onivoro") return "homem";
        else return "vaca";
    }
    else{
        if(s2 == "inseto"){
            if(s3 == "hematofago") return "pulga";
            else return "lagarta";
        }
        else if(s3 == "hematofago") return "sanguessuga";
        else return "minhoca";
    }
}

int main()
{
    string s1, s2, s3;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
     string ch = re(s1, s2, s3);
     cout << ch << endl;

     return 0;
}
