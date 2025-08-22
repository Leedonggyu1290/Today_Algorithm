#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int mul = 1;
    vector<int> r;
    
    while(n > 0){
        r.push_back(n%3);
        n /= 3;
    }
    
    for(int i = r.size() - 1; i >= 0; i--){
        answer += r[i]*mul;
        mul *= 3;
    }
    
    return answer;
}