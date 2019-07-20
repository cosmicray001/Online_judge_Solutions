#include <bits/stdc++.h>
using namespace std;
string s[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", ".--.-."};
string s1 = "'";
char ch[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '.', ',', '?', 'n', '!', '/', '(', ')', '&', ':', ';', '=', '+', '-', '_', '"', '@'};
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0;
  string ss;
  for(scanf("%d", &t), getchar(); t--; ){
    if(co++) printf("\n");
    printf("Message #%d\n", co);
    getline(cin, ss);
    string a = "";
    for(int i = 0; i < ss.size(); i++){
      if(ss[i] == ' ' && a == "") printf(" ");
      else if(ss[i] == ' ' && a != ""){
        for(int j = 0; j < 54; j++){
          if(s[j].compare(a) == 0){
            if(ch[j] != 'n') cout << ch[j];
            else cout << s1;
          }
        }
        a = "";
      }
      else a += ss[i];
    }
    if(a != ""){
      for(int j = 0; j < 54; j++){
        if(s[j].compare(a) == 0){
          if(ch[j] != 'n') cout << ch[j];
          else cout << s1;
        }
      }
    }
    printf("\n");
  }
  return 0;
}
