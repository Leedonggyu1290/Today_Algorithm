#include <iostream>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    long long a;
    
    a = sqrt(n);
    
    if(n == pow(a, 2))
        answer = pow(a + 1, 2);
    
    return answer;
}