#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    int count = 0;
    
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            count = 0;
        }
        else if(count % 2 == 0){
            if(s[i] >= 'a' && s[i] <= 'z'){
                s[i] -= 32;
            }
            count++;
        }
        else{
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] += 32;
            }
            count++;
        }
        
    }
    
    return s;
}