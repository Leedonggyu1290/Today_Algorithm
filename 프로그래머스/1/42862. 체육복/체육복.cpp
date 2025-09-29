#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n - lost.size();
    vector<bool> checkLost(n + 1, false);
    
    sort(reserve.begin(), reserve.end());
    
    for(int i : lost){
        checkLost[i] = true;
    }
    
    for(int j = 0; j < reserve.size();){
        if(checkLost[reserve[j]] == true){
            answer++;
            checkLost[reserve[j]] = false;
            reserve.erase(reserve.begin() + j);
        }
        else{
            j++;
        }
    }
    
    for(int j : reserve){
        if(j > 1 && checkLost[j - 1] == true){
            answer++;
            checkLost[j - 1] = false;
        }
        else if(j < n && checkLost[j + 1] == true){
            answer++;
            checkLost[j + 1] = false;
        }
    }
    
    return answer;
}