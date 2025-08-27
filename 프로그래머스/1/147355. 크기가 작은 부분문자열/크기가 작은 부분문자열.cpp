#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int a = 0;
    vector<string> v;
    
    for(int i = 0; i <= t.length() - p.length(); i++){
        v.push_back(t.substr(i, p.length()));
    }
    
    for(int j = 0; j < v.size(); j++){
        if(p >= v[j])
            answer++;
    }
    
    return answer;
}