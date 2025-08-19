#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int a;
    
    do{
        answer.push_back(n%10);
        n = n/10;
    }while(n != 0);
    
    return answer;
}