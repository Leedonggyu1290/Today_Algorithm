#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> person1 = {1, 2, 3, 4, 5};
    vector<int> person2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> person3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int correct1 = 0;
    int correct2 = 0;
    int correct3 = 0;
    
    for(int i = 0; i < answers.size(); i++){
        if(answers[i] == person1[i % 5]){
            correct1++;
        }
        if(answers[i] == person2[i % 8]){
            correct2++;
        }
        if(answers[i] == person3[i % 10]){
            correct3++;
        }
    }
    
    if(correct1 == correct2 && correct2 == correct3){
        answer.push_back(1);
        answer.push_back(2);
        answer.push_back(3);
    }
    else if(correct1 == correct2 && correct2 > correct3){
        answer.push_back(1);
        answer.push_back(2);
    }
    else if(correct2 == correct3 && correct2 > correct1){
        answer.push_back(2);
        answer.push_back(3);
    }
    else if(correct1 == correct3 && correct3 > correct2){
        answer.push_back(1);
        answer.push_back(3);
    }
    else if(correct1 > correct2 && correct1 > correct3){
        answer.push_back(1);
    }
    else if(correct2 > correct1 && correct2 > correct3){
        answer.push_back(2);
    }
    else if(correct3 > correct1 && correct3 > correct2){
        answer.push_back(3);
    }
    
    return answer;
}