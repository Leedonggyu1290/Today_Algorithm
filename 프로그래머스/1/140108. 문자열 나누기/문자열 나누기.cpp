#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    char standardChar;
    int currectCount = 0;
    int differentCount = 0;
    
    for(int i = 0; i < s.length(); i++){
        if(currectCount == 0){
            standardChar = s[i];
            currectCount++;
        }
        else{
            if(s[i] == standardChar){
                currectCount++;
            }
            else if(s[i] != standardChar){
                differentCount++;
            }
        }
        
        if(currectCount == differentCount){
            answer++;
            currectCount = 0;
            differentCount = 0;
        }
    }
    
    if(currectCount != 0){
        answer++;
    }
    
    return answer;
}