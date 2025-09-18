#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zeroCount = 0;
    int wins = 0;
    
    for(int i = 0; i < lottos.size(); i++){
        if(lottos[i] == 0){
            zeroCount++;
        }
        else{
            auto a = find(win_nums.begin(), win_nums.end(), lottos[i]);
            if(a != win_nums.end()){
                wins++;
            }
        }
    }
    
    if(wins == 0){
        if(zeroCount == 0){
            answer.push_back(6);
        }
        else{
            answer.push_back(7 - (wins + zeroCount));
        }
        answer.push_back(6);
    }
    else{
        answer.push_back(7 - (wins + zeroCount));
        answer.push_back(7 - wins);
    }
    
    return answer;
}