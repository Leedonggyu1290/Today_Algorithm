#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    int b = 0;
    
    while(n > 9){
        b = n%10;
        n = n/10;
        answer += b;
    }
    
    return answer + n;
}