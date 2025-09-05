#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int count = 0;
    
    while(n != 0){
        n += count;
        if(n < a)
            count = 0;
        else
            count = n % a;
        n = (n / a) * b;
        answer += n;
    }
    
    return answer;
}