#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
    int tmp = 0;
    if(a > b){
        tmp = a;
        a = b;
        b = tmp;
    }
    
    int mod = b % a;
    while(mod > 0){
        b = a;
        a = mod;
        mod = b % a;
    }
    return a;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    answer.push_back(gcd(n, m));
    answer.push_back(n * m / gcd(n, m));
    
    return answer;
}