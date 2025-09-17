#include <string>
#include <vector>

using namespace std;

int countDivision(int n){
    int count = 1;
    for(int i = 1; i <= n / 2; i++){
        if(n % i == 0){
            count++;
        }
    }
    return count;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for(int i = 1; i <= number; i++){
        int count = countDivision(i);
        if(count > limit){
            count = power;
        }
        answer += count;
    }
    
    return answer;
}