#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    int c1Count = 0;
    int c2Count = 0;
    
    for(int i = 0; i < goal.size(); i++){
        if(goal[i] == cards1[c1Count]){
            c1Count++;
        }
        else if(goal[i] == cards2[c2Count]){
            c2Count++;
        }
        else{
            answer = "No";
            break;
        }
    }
    
    return answer;
}