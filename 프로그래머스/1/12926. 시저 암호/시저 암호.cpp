#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] -= 26 - n;
            if(s[i] < 'A')
                s[i] = 'Z' - ('A' - s[i] - 1);
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] -= 26 - n;
            if(s[i] < 'a')
                s[i] = 'z' - ('a' - s[i] - 1);
        }
        cout << s[i] << endl;
    }
    return s;
}