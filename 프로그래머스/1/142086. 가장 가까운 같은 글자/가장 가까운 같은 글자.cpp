#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    answer.push_back(-1);
    
    for(int i = 1; i < s.length(); i++){
        for(int j = i - 1; ; j--){
            if(s[i] == s[j]){
                answer.push_back(i - j);
                break;
            }
            else if(j < 1){
                answer.push_back(-1);
                break;
            }
        }
    }
    
    return answer;
}