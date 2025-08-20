#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    while(n != 1 && answer <= 500){
        if(n%2 == 0)
            n /= 2;
        else if(n%2 == 1)
            n = n * 3 + 1;
        
        answer++;
    }
    if(answer > 500)
        return -1;
    
    return answer;
}