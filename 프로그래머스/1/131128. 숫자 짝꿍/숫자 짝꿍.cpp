// 각 숫자들이 몇개씩 들어가 있는지를 계산하는 방법으로 풀어야함
// 그래야 시간초과가 나지 않음(시간 복잡도)

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int count = 0;
    bool isZero = true;
    vector<int> v1(10, 0);
    vector<int> v2(10, 0);
    
    for(int i = 0; i < X.length(); i++){
        int a = X[i] - 48;
        v1[a]++;
    }
    for(int i = 0; i < Y.length(); i++){
        int a = Y[i] - 48;
        v2[a]++;
    }
    
    for(int i = 0; i < v1.size(); i++){
        if(v1[i] <= v2[i]){
            count = v1[i];
        }
        else{
            count = v2[i];
        }
        for(int j = 0; j < count; j++){
            answer += to_string(i);
            if(i > 0 && isZero == true){
                isZero = false;
            } 
        }
        count = 0;
    }
    
    sort(answer.begin(), answer.end(), greater<char>());
    
    if(answer == ""){
        answer = "-1";
    }
    else if(isZero){
        answer = "0";
    }
    
    return answer;
}